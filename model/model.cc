#include "model.h"

s21::Model::Model(const s21::Model &value) {}

/* functions for parsing .obj*/

int s21::Model::count_vertexes_polygons(char *path_of_file, data_t *some_data) {
  return 0;
}

int s21::Model::create_matrix_obj(char *path_of_file, data_t *some_data) {
  return 0;
}
int s21::Model::note_vertexes_polygons(char *path_of_file, data_t *some_data) {
  return 0;
}
int s21::Model::help_funk_vertexes_polygons(char *lineptr, data_t *some_data,
                                            int count_polygon) {
  return 0;
}

/* functions for transforming object */

void s21::Model::move_obj(data_t *some_data, double x, double y, double z) {}

void s21::Model::rotation_by_ox(data_t *some_data, double angle) {}

void s21::Model::rotation_by_oy(data_t *some_data, double angle) {}

void s21::Model::rotation_by_oz(data_t *some_data, double angle) {}

void s21::Model::scale_obj(data_t *some_data, double scale) {}

void s21::Model::get_max_min_frustum(double *max, double *min, data_t obj) {}