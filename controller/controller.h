#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "../model/model.h"

namespace s21 {

class Controller {
private:
  s21::Model model;

public:
  int is_digit(char expression);
  bool count_vertexes_polygons(std::string &path_of_file);
  bool create_matrix_obj(std::string &path_of_file);
  bool note_vertexes_polygons(std::string &path_of_file);
  int help_funk_vertexes_polygons(std::string &lineptr, int &count_polygon);
  void move_obj(double x, double y, double z);
  void rotation_by_ox(double corner);
  void rotation_by_oy(double corner);
  void rotation_by_oz(double corner);
  void scale_obj(double scale);
  void get_max_min_frustum(double *max, double *min, data_t obj);
};

} //  namespace s21

#endif
