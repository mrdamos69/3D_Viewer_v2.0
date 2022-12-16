#ifndef STRUCT_H_
#define STRUCT_H_

#include "../../matrix_lib/S21_matrix_oop.h"
namespace s21 {
struct polygon_t {
  polygon_t() : vertexes(nullptr), numbers_of_vertexes_in_facets(0) {}
  int *vertexes;
  int numbers_of_vertexes_in_facets;
};

struct data_t {
  data_t() : count_of_vertex(0), count_of_polygons(0) {}
  ~data_t() {}
 public:
  int count_of_vertex;
  int count_of_polygons;
  S21Matrix matrix;
  polygon_t *polygons;
};
}
#endif // STRUCT_H_