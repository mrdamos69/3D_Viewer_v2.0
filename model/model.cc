#include "model.h"

// s21::Model::Model(const s21::Model &value) {
  
// }

s21::Model::Model(int rows, int cols) {
    this->data.matrix.set_cols(cols);
    this->data.matrix.set_cols(rows);
}

/**
 * @brief проверка, что лексема - число
 * @param error если 0 - ошибки нет, если 1 - ошибка
 */
int s21::Model::is_digit(char expression) {
  int error = 1;
  if ((expression >= '0' && expression <= '9') || expression == '.') {
    error = 0;
  }
  return error;
}

/* functions for parsing .obj*/

/**
 * @brief подсчет вершин и полигонов
 * @param error если 0 - ошибки нет, если 1 - ошибка (файла нет)
 * @param path_of_file путь к объекту
 * @param some_data куда записываем данные
 */
bool s21::Model::count_vertexes_polygons(std::string &path_of_file) {
//   int error = 0;
  int cnt_vertexs = 0;
  int cnt_polygons = 0;
  this->data.count_of_vertex = 0;
  this->data.count_of_polygons = 0;
  this->data.polygons = NULL;
  std::ifstream file(path_of_file);
  if (!file.eof()) {
    std::string lineptr;
    // size_t n;
    while (std::getline(file, lineptr)) {
      if (lineptr[0] == 'v' && lineptr[1] != 'n' && lineptr[1] != 't') {
        cnt_vertexs++;
      } else if (lineptr[0] == 'f') {
        cnt_polygons++;
      }
    }
  } else {
    return false;
  }
  file.close();
  this->data.count_of_vertex = cnt_vertexs;
  this->data.count_of_polygons = cnt_polygons;
  return true;
}

/**
 * @brief создание матрицы всех вершин
 * @param error если 0 - ошибки нет, если 1 - ошибка (файла нет)
 * @param path_of_file путь к объекту
 * @param some_data куда записываем данные
 */
bool s21::Model::create_matrix_obj(std::string &path_of_file) {
//   int error = 0;
  std::ifstream file(path_of_file);
  if (!file.eof()) {
    S21Matrix temp(this->data.count_of_vertex, 3);
    std::string lineptr;
    // size_t n;
    int rows = 0, columns = 0;
    while (std::getline(file, lineptr)) {
      if (lineptr[0] == 'v' && lineptr[1] != 'n' && lineptr[1] != 't') {
        for (int index = 2;
             (lineptr[index] != '\n') || (lineptr[index] != '\0'); index++) {
          if (is_digit(lineptr[index]) == 0 || lineptr[index] == '-') {
            char *start_number = &lineptr[index];
            if (lineptr[index] == '-')
              index++;
            while (is_digit(lineptr[index]) == 0) {
              index++;
            }
            char *finish_number = &lineptr[--index];
            double number = strtod(start_number, &finish_number);
            this->data.matrix(rows, columns) = number;

            if (columns < 2) {
              columns++;
            } else {
              columns = 0;
              break;
            }
          } else if (lineptr[index] == ' ') {
            continue;
          }
        }
        rows++;
      }
    }
  } else {
    return false;
  }
  file.close();
  return true;
}

bool s21::Model::note_vertexes_polygons(std::string &path_of_file) {
//   int error = 0;
  this->data.polygons = new s21::polygon_t[this->data.count_of_polygons + 1];
  std::ifstream file(path_of_file);
  int count = 0;
  if (!file.eof()) {
    std::string lineptr;
    // size_t n;
    while (getline(file, lineptr)) {
      if (lineptr[0] == 'f') {
        for (size_t i = 1; lineptr[i]; i++) {
          if (lineptr[i] >= '0' && lineptr[i] <= '9') {
            if (lineptr[i - 1] == ' ') {
              this->data.polygons[count].numbers_of_vertexes_in_facets++;
            }
          }
        }
        this->help_funk_vertexes_polygons(lineptr, count);
        count++;
      }
    };
  } else {
    return false;
  }
  file.close();
  return true;
}

int s21::Model::help_funk_vertexes_polygons(std::string &lineptr,
                                            int &count_polygon) {
  int error = 0;
  int tmp_polygon;
  int j = 0;
  char* temp_date = lineptr.data();
  this->data.polygons[count_polygon].vertexes = new int[this->data.polygons[count_polygon].numbers_of_vertexes_in_facets * 2];
  for (size_t i = 1; lineptr[i]; i++) {
    if (temp_date[i] >= '0' && temp_date[i] <= '9') {
      if (temp_date[i - 1] == ' ') {
        char tmp[10] = "";
        while (temp_date[i] >= '0' && lineptr[i] <= '9') {
          strncat(tmp, temp_date + i, 1);
          i++;
        }
        tmp_polygon = atoi(tmp);
        this->data.polygons[count_polygon].vertexes[j] = tmp_polygon - 1;
        j++;
        if (j % 2 == 0) {
          this->data.polygons[count_polygon].vertexes[j] = tmp_polygon - 1;
          j++;
        }
        if (j + 1 ==
            this->data.polygons[count_polygon].numbers_of_vertexes_in_facets *
                2) {
          this->data.polygons[count_polygon].vertexes[j] =
              this->data.polygons[count_polygon].vertexes[0];
        }
      }
    }
  }
  return error;
}

void s21::Model::move_obj(double x, double y, double z) {
    for (int i = 0; i < this->data.matrix.get_rows(); i++) {
      this->data.matrix(i, 0) += x;
      this->data.matrix(i, 1) += y;
      this->data.matrix(i, 2) += z;
  }
}

void s21::Model::rotation_by_ox(double corner) {
  S21Matrix tmp(this->data.matrix);
  tmp  = (data).matrix;
  S21Matrix turn_matrix(3, 3);
  turn_matrix(0, 0) = 1;
  turn_matrix(0, 1) = 0;
  turn_matrix(0, 2) = 0;
  turn_matrix(1, 0) = 0;
  turn_matrix(1, 1) = cos(corner);
  turn_matrix(1, 2) = sin(corner);
  turn_matrix(2, 0) = 0;
  turn_matrix(2, 1) = -sin(corner);
  turn_matrix(2, 2) = cos(corner);
  this->data.matrix.mul_matrix(turn_matrix);
}

void s21::Model::rotation_by_oy(double corner) {
    S21Matrix tmp(this->data.matrix);
    tmp  = (data).matrix;
    S21Matrix turn_matrix(3, 3);
    turn_matrix(0, 0) = cos(corner);
    turn_matrix(0, 1) = 0;
    turn_matrix(0, 2) = -sin(corner);
    turn_matrix(1, 0) = 0;
    turn_matrix(1, 1) = 1;
    turn_matrix(1, 2) = 0;
    turn_matrix(2, 0) = sin(corner);
    turn_matrix(2, 1) = 0;
    turn_matrix(2, 2) = cos(corner);
    this->data.matrix.mul_matrix(turn_matrix);
}

void s21::Model::rotation_by_oz(double corner) {
    S21Matrix tmp(this->data.matrix);
    tmp  = (data).matrix;
    S21Matrix turn_matrix(3, 3);
    turn_matrix(0, 0) = cos(corner);
    turn_matrix(0, 1) = sin(corner);
    turn_matrix(0, 2) = 0;
    turn_matrix(1, 0) = -sin(corner);
    turn_matrix(1, 1) = cos(corner);
    turn_matrix(1, 2) = 0;
    turn_matrix(2, 0) = 0;
    turn_matrix(2, 1) = 0;
    turn_matrix(2, 2) = 1;
    this->data.matrix.mul_matrix(turn_matrix);
}

void s21::Model::scale_obj(double scale) {
  for (int i = 0; i < this->data.matrix.get_rows(); i++) {
    this->data.matrix(i, 0) *= scale;
    this->data.matrix(i, 1) *= scale;
    this->data.matrix(i, 2) *= scale;
}
}

void s21::Model::get_max_min_frustum(double *max, double *min, data_t obj) {
    double min_vertex = obj.matrix(0, 0);
    double max_vertex = obj.matrix(0, 1);
    for (int i = 0; i < obj.count_of_vertex; i++) {
        for (int j = 0; j < 3; j++) {
            if (min_vertex > obj.matrix(i, j)) {
                min_vertex = obj.matrix(i, j);
            }
            if (max_vertex < obj.matrix(i, j)) {
                max_vertex = obj.matrix(i, j);
            }
        }
    }
    *max = max_vertex;
    *min = min_vertex;
}
