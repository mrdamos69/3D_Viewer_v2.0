#ifndef MODEL_H
#define MODEL_H

#include <fstream>
#include <iostream>
#include <string>
#include <cstring>

#include "../matrix_lib/S21_matrix_oop.h"

namespace s21 {

struct polygon_t {
  polygon_t() : vertexes(nullptr), numbers_of_vertexes_in_facets(0) {}
  int *vertexes;
  int numbers_of_vertexes_in_facets;
};

struct data_t {
  data_t() : count_of_vertex(0), count_of_polygons(0) {}
  int count_of_vertex;
  int count_of_polygons;
  S21Matrix matrix;
  polygon_t *polygons;
};

class Model {

public:
  Model() {};
  Model(int rows, int cols);
  // Model(const Model &value);

  int is_digit(char expression);

  /* functions for parsing .obj */

  bool count_vertexes_polygons(std::string &path_of_file);
  bool create_matrix_obj(std::string &path_of_file);
  bool note_vertexes_polygons(std::string &path_of_file);

  int help_funk_vertexes_polygons(std::string &lineptr, int &count_polygon);

  /* functions for transforming object */
  void move_obj(double x, double y, double z);
  void rotation_by_ox(double corner);
  void rotation_by_oy(double corner);
  void rotation_by_oz(double corner);
  void scale_obj(double scale);
  void get_max_min_frustum(double *max, double *min, data_t obj);

  public:
    data_t data;
};

} // namespace s21

#endif  // MODEL_H
