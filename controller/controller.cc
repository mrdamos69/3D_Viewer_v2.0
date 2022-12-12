#include "controller.h"

int s21::Controller::is_digit(char expression) {
    return model.is_digit(expression);
}

bool s21::Controller::count_vertexes_polygons(std::string &path_of_file, data_t &some_data) {
    return model.count_vertexes_polygons(path_of_file, some_data);
}

bool s21::Controller::create_matrix_obj(std::string &path_of_file, data_t &some_data) {
    return model.create_matrix_obj(path_of_file, some_data);
}

bool s21::Controller::note_vertexes_polygons(std::string &path_of_file, data_t &some_data) {
    return model.note_vertexes_polygons(path_of_file, some_data);
}

int s21::Controller::help_funk_vertexes_polygons(std::string &lineptr, data_t &some_data, int &count_polygon) {
    return model.help_funk_vertexes_polygons(lineptr, some_data, count_polygon);
}

void s21::Controller::move_obj(data_t &some_data, double x, double y, double z) {
    return model.move_obj(some_data, x, y, z);
}

void s21::Controller::rotation_by_ox(data_t &some_data, double corner) {
    return model.rotation_by_ox(some_data, corner);
}

void s21::Controller::rotation_by_oy(data_t &some_data, double corner) {
    return model.rotation_by_oy(some_data, corner);
}

void s21::Controller::rotation_by_oz(data_t &some_data, double corner) {
    return model.rotation_by_oz(some_data, corner);
}

void s21::Controller::scale_obj(data_t &some_data, double scale) {
    return model.scale_obj(some_data, scale);
}

void s21::Controller::get_max_min_frustum(double *max, double *min, data_t obj) {
    return model.get_max_min_frustum(max, min, obj);
}