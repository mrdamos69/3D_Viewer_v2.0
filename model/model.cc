#include "model.h"

bool s21::Model::is_digit(char expression) {
  return parser->is_digit(expression);
}

bool s21::Model::count_vertexes_polygons(std::string &path_of_file,
                                         data_t &some_data) {
  return parser->count_vertexes_polygons(path_of_file, some_data);
}

bool s21::Model::create_matrix_obj(std::string &path_of_file,
                                   data_t &some_data) {
  return parser->create_matrix_obj(path_of_file, some_data);                                     
}

bool s21::Model::note_vertexes_polygons(std::string &path_of_file,
                                        data_t &some_data) {
  return parser->note_vertexes_polygons(path_of_file, some_data);                                                                                    
}

void s21::Model::help_funk_vertexes_polygons(std::string &lineptr,
                                             data_t &some_data,
                                             int &count_polygon) {
return parser->help_funk_vertexes_polygons(lineptr, some_data, count_polygon);
}

void s21::Model::move_obj(data_t &some_data, double x, double y, double z) {
  transform->move_obj(some_data, x, y, z);
}

void s21::Model::rotation_by_ox(data_t &some_data, double corner) {
  transform->rotation_by_ox(some_data, corner);
}

void s21::Model::rotation_by_oy(data_t &some_data, double corner) {
 transform->rotation_by_oy(some_data, corner);
}

void s21::Model::rotation_by_oz(data_t &some_data, double corner) {
 transform->rotation_by_oz(some_data, corner);
}

void s21::Model::scale_obj(data_t &some_data, double scale) {
  transform->scale_obj(some_data, scale);
}

void s21::Model::get_max_min_frustum(double *max, double *min, data_t obj) {
transform->get_max_min_frustum(max, min, obj);
}
