#ifndef MODEL_H
#define MODEL_H

#include "parser/parser.h"
#include "transform/transform.h"
#include "struct/struct.h"
namespace s21 {

class Model {
 private:
  s21::Parser *parser;
  s21::Transform *transform;
  static Model *model;
  Model(){
    parser = parser->get_parser();
    transform = transform->get_parser();
  };
  ~Model() {delete model;}
public:
   static Model* get_model() {
        if (!model) model = new Model();
        return model;
    } 
  /* functions for parsing .obj */
  bool is_digit(char expression);
  bool count_vertexes_polygons(std::string &path_of_file, data_t &some_data);
  bool create_matrix_obj(std::string &path_of_file, data_t &some_data);
  bool note_vertexes_polygons(std::string &path_of_file, data_t &some_data);

  void help_funk_vertexes_polygons(std::string &lineptr, data_t &some_data,
                                   int &count_polygon);

  /* functions for transforming object */
  void move_obj(data_t &some_data, double x, double y, double z);
  void rotation_by_ox(data_t &some_data, double corner);
  void rotation_by_oy(data_t &some_data, double corner);
  void rotation_by_oz(data_t &some_data, double corner);
  void scale_obj(data_t &some_data, double scale);
  void get_max_min_frustum(double *max, double *min, data_t obj);

};

}  // namespace s21

#endif  // MODEL_H
