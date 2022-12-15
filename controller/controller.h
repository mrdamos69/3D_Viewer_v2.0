#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "../model/model.h"
#include "../model/struct/struct.h"

namespace s21 {

class Controller {
 private:
  Model model;
  static Controller *controller_;
  Controller() { model.get_model(); }
  ~Controller() { delete controller_; }

 public:
  static Controller *get_controller() {
    if (!controller_) controller_ = new Controller();
    return controller_;
  }
  int is_digit(char expression);
  bool count_vertexes_polygons(std::string &path_of_file, data_t &some_data);
  bool create_matrix_obj(std::string &path_of_file, data_t &some_data);
  bool note_vertexes_polygons(std::string &path_of_file, data_t &some_data);
  void move_obj(data_t &some_data, double x, double y, double z);
  void rotation_by_ox(data_t &some_data, double corner);
  void rotation_by_oy(data_t &some_data, double corner);
  void rotation_by_oz(data_t &some_data, double corner);
  void scale_obj(data_t &some_data, double scale);
  void get_max_min_frustum(double *max, double *min, data_t obj);
};

}  //  namespace s21

#endif
