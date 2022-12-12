#include "controller.h"

int s21::Controller::is_digit(char expression) {
    return model.is_digit(expression);
}

bool s21::Controller::count_vertexes_polygons(std::string &path_of_file) {
    return model.count_vertexes_polygons(path_of_file);
}

bool s21::Controller::create_matrix_obj(std::string &path_of_file) {
    return model.create_matrix_obj(path_of_file);
}

bool s21::Controller::note_vertexes_polygons(std::string &path_of_file) {
    return model.note_vertexes_polygons(path_of_file);
}

int s21::Controller::help_funk_vertexes_polygons(std::string &lineptr, int &count_polygon) {
    return model.help_funk_vertexes_polygons(lineptr, count_polygon);
}

void s21::Controller::move_obj(double x, double y, double z) {
    return model.move_obj(x, y, z);
}

void s21::Controller::rotation_by_ox(double corner) {
    return model.rotation_by_ox(corner);
}

void s21::Controller::rotation_by_oy(double corner) {
    return model.rotation_by_oy(corner);
}

void s21::Controller::rotation_by_oz(double corner) {
    return model.rotation_by_oz(corner);
}

void s21::Controller::scale_obj(double scale) {
    return model.scale_obj(scale);
}

void s21::Controller::get_max_min_frustum(double *max, double *min, data_t obj) {
    return model.get_max_min_frustum(max, min, obj);
}