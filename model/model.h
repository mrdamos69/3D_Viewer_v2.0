#ifndef MODEL_H
#define MODEL_H

#include <cstring>
#include <fstream>
#include <iostream>
#include <string>

#include "../matrix_lib/S21_matrix_oop.h"

namespace s21 {

struct polygon_t {
  polygon_t() : vertexes(nullptr), numbers_of_vertexes_in_facets(0) {}
  int *vertexes;
  int numbers_of_vertexes_in_facets;
};

struct data_t {
  data_t() : count_of_vertex(0), count_of_polygons(0) {}

 public:
  int count_of_vertex;
  int count_of_polygons;
  S21Matrix matrix;
  polygon_t *polygons;
};

class Model {
 public:
  Model(){};
  // Model(const Model &value);

  int is_digit(char expression);

  /* functions for parsing .obj */

  bool count_vertexes_polygons(std::string &path_of_file, data_t &some_data);
  bool parsing_vertexes_and_polygons(std::string &path_of_file,
                                     int &cnt_vertexs, int &cnt_polygons,
                                     data_t &some_data);
  bool create_matrix_obj(std::string &path_of_file, data_t &some_data);
  bool note_vertexes_polygons(std::string &path_of_file, data_t &some_data);

  void help_funk_vertexes_polygons(std::string &lineptr, data_t &some_data,
                                   int &count_polygon);

  /* functions for transforming object */
  void move_obj(data_t &some_data, double x, double y, double z);
  void rotation_by_ox(data_t &some_data, double corner);
  void rotation_by_oy(data_t &some_data, double corner);
  void rotation_by_oz(data_t &some_data, double corner);
  void scale_obj(data_t &some_data, double scale);
  void get_max_min_frustum(double *max, double *min, data_t obj);
};

}  // namespace s21

#endif  // MODEL_H
