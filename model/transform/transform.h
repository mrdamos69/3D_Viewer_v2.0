#ifndef TRANSFORM_H_
#define TRANSFORM_H_

#include <cstring>
#include <fstream>
#include <iostream>
#include <string>

#include "../../matrix_lib/S21_matrix_oop.h"
#include "../struct/struct.h"
namespace s21 {
class Transform {
private:
 public:
    Transform() {}
    ~Transform() {}
 public:
  void move_obj(data_t &some_data, double x, double y, double z);
  void rotation_by_ox(data_t &some_data, double corner);
  void rotation_by_oy(data_t &some_data, double corner);
  void rotation_by_oz(data_t &some_data, double corner);
  void scale_obj(data_t &some_data, double scale);
  void get_max_min_frustum(double *max, double *min, data_t obj);
};
}      // namespace s21
#endif  // TRANSFORM_H_
