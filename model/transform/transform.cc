#include "transform.h"

void s21::Transform::move_obj(data_t &some_data, double x, double y, double z) {
  for (int i = 0; i < some_data.matrix.get_rows(); i++) {
    some_data.matrix(i, 0) += x;
    some_data.matrix(i, 1) += y;
    some_data.matrix(i, 2) += z;
  }
}

void s21::Transform::rotation_by_ox(data_t &some_data, double corner) {
  S21Matrix tmp(some_data.matrix);
  tmp = some_data.matrix;
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
  some_data.matrix.mul_matrix(turn_matrix);
}

void s21::Transform::rotation_by_oy(data_t &some_data, double corner) {
  S21Matrix tmp(some_data.matrix);
  tmp = some_data.matrix;
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
  some_data.matrix.mul_matrix(turn_matrix);
}

void s21::Transform::rotation_by_oz(data_t &some_data, double corner) {
  S21Matrix tmp(some_data.matrix);
  tmp = some_data.matrix;
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
  some_data.matrix.mul_matrix(turn_matrix);
}

void s21::Transform::scale_obj(data_t &some_data, double scale) {
  for (int i = 0; i < some_data.matrix.get_rows(); i++) {
    some_data.matrix(i, 0) *= scale;
    some_data.matrix(i, 1) *= scale;
    some_data.matrix(i, 2) *= scale;
  }
}

void s21::Transform::get_max_min_frustum(double *max, double *min, data_t obj) {
  double min_vertex = obj.matrix(0, 0);
  double max_vertex = obj.matrix(0, 1);
  for (int i = 0; i < obj.count_of_vertex; i++) {
    for (int j = 0; j < 3; j++) {
      if (min_vertex > obj.matrix(i, j)) min_vertex = obj.matrix(i, j);
      if (max_vertex < obj.matrix(i, j)) max_vertex = obj.matrix(i, j);
    }
  }
  *max = max_vertex;
  *min = min_vertex;
}
