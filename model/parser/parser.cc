#include "parser.h"

bool s21::Parser::is_digit(char expression) {
  return ((expression >= '0' && expression <= '9') || expression == '.');
}

bool s21::Parser::count_vertexes_polygons(std::string &path_of_file,
                                          data_t &some_data) {
  int cnt_vertexs = 0, cnt_polygons = 0;
  some_data.count_of_vertex = 0;
  some_data.count_of_polygons = 0;
  some_data.polygons = NULL;
  return parsing_vertexes_and_polygons(path_of_file, cnt_vertexs, cnt_polygons,
                                       some_data);
}

bool s21::Parser::parsing_vertexes_and_polygons(std::string &path_of_file,
                                                int &cnt_vertexs,
                                                int &cnt_polygons,
                                                data_t &some_data) {
  std::ifstream file(path_of_file);
  if (!file.eof()) {
    std::string lineptr;
    while (std::getline(file, lineptr)) {
      if (lineptr[0] == 'v' && lineptr[1] != 'n' && lineptr[1] != 't') {
        cnt_vertexs++;
      } else if (lineptr[0] == 'f') {
        cnt_polygons++;
      }
    }
  }
  file.close();
  some_data.count_of_vertex = cnt_vertexs;
  some_data.count_of_polygons = cnt_polygons;
  return (file.eof());
}

/**
 * @brief создание матрицы всех вершин
 * @param error если 0 - ошибки нет, если 1 - ошибка (файла нет)
 * @param path_of_file путь к объекту
 * @param some_data куда записываем данные
 */
bool s21::Parser::create_matrix_obj(std::string &path_of_file,
                                    data_t &some_data) {
  std::ifstream file(path_of_file);
  if (!file.eof() && file.is_open()) {
    some_data.matrix.set_rows_cols(some_data.count_of_vertex, 3);
    std::string lineptr;
    int rows = 0, columns = 0;
    while (std::getline(file, lineptr)) {
      if (lineptr[0] == 'v' && lineptr[1] != 'n' && lineptr[1] != 't') {
        for (int index = 2;
             (lineptr[index] != '\n') || (lineptr[index] != '\0'); index++) {
          if (is_digit(lineptr[index]) || lineptr[index] == '-') {
            char *start_number = &lineptr[index];
            if (lineptr[index] == '-') index++;
            while (is_digit(lineptr[index])) index++;
            char *finish_number = &lineptr[--index];
            double number = strtod(start_number, &finish_number);
            some_data.matrix(rows, columns) = number;
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
    file.close();
    return false;
  }
  file.close();
  return true;
}

bool s21::Parser::note_vertexes_polygons(std::string &path_of_file,
                                         data_t &some_data) {
  some_data.polygons = new s21::polygon_t[some_data.count_of_polygons + 1];
  std::ifstream file(path_of_file);
  int count = 0;
  if (!file.eof() && file.is_open()) {
    std::string lineptr;
    while (getline(file, lineptr)) {
      if (lineptr[0] == 'f') {
        for (size_t i = 1; lineptr[i]; i++) {
          if (lineptr[i] >= '0' && lineptr[i] <= '9')
            if (lineptr[i - 1] == ' ')
              some_data.polygons[count].numbers_of_vertexes_in_facets++;
        }
        this->help_funk_vertexes_polygons(lineptr, some_data, count);
        count++;
      }
    }
  } else {
    file.close();
    return false;
  }
  file.close();
  return true;
}

void s21::Parser::help_funk_vertexes_polygons(std::string &lineptr,
                                              data_t &some_data,
                                              int &count_polygon) {
  int tmp_polygon;
  int j = 0;
  char *temp_date = lineptr.data();
  some_data.polygons[count_polygon].vertexes =
      new int[some_data.polygons[count_polygon].numbers_of_vertexes_in_facets *
              2];
  for (size_t i = 1; lineptr[i]; i++) {
    if (temp_date[i] >= '0' && temp_date[i] <= '9') {
      if (temp_date[i - 1] == ' ') {
        char tmp[10] = "";
        while (temp_date[i] >= '0' && lineptr[i] <= '9') {
          strncat(tmp, temp_date + i, 1);
          i++;
        }
        tmp_polygon = atoi(tmp);
        some_data.polygons[count_polygon].vertexes[j] = tmp_polygon - 1;
        j++;
        if (j % 2 == 0) {
          some_data.polygons[count_polygon].vertexes[j] = tmp_polygon - 1;
          j++;
        }
        if (j + 1 ==
            some_data.polygons[count_polygon].numbers_of_vertexes_in_facets *
                2) {
          some_data.polygons[count_polygon].vertexes[j] =
              some_data.polygons[count_polygon].vertexes[0];
        }
      }
    }
  }
}