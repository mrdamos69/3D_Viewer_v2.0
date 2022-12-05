#ifndef MODEL_H
#define MODEL_H

#include <cmath>
#include <iostream>
#include <list>
#include <string>
#include <vector>

#include "../matrix_lib/S21_matrix_oop.h"

namespace s21 {

struct polygon_t {
  int *vertexes;
  int numbers_of_vertexes_in_facets;
};

struct data_t {
  int count_of_vertex;
  int count_of_polygons;
  S21Matrix matrix;
  polygon_t *polygons;
};

class Model {
private:
public:
  Model(){};
  Model(const Model &value);

  /* functions for parsing .obj*/
  int count_vertexes_polygons(char *path_of_file, data_t *some_data);
  int create_matrix_obj(char *path_of_file, data_t *some_data);
  int note_vertexes_polygons(char *path_of_file, data_t *some_data);
  int help_funk_vertexes_polygons(char *lineptr, data_t *some_data,
                                  int count_polygon);

  /* functions for transforming object */
  void move_obj(data_t *some_data, double x, double y, double z);
  void rotation_by_ox(data_t *some_data, double angle);
  void rotation_by_oy(data_t *some_data, double angle);
  void rotation_by_oz(data_t *some_data, double angle);
  void scale_obj(data_t *some_data, double scale);
  void get_max_min_frustum(double *max, double *min, data_t obj);
};

} // namespace s21

#endif
