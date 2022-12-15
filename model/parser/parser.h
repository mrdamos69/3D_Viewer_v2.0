#ifndef PARSER_H_
#define PARSER_H_

#include <cstring>
#include <fstream>
#include <iostream>
#include <string>

#include "../../matrix_lib/S21_matrix_oop.h"
#include "../struct/struct.h"
namespace s21 {
class Parser {
private:
    static Parser* parser;
 public:
    Parser() {}
    ~Parser() { delete parser; }
    static Parser* get_parser() {
        if (!parser) parser = new Parser();
        return parser;
    }
  bool is_digit(char expression);
  bool count_vertexes_polygons(std::string &path_of_file, data_t &some_data);
  bool parsing_vertexes_and_polygons(std::string &path_of_file,
                                     int &cnt_vertexs, int &cnt_polygons,
                                     data_t &some_data);
  bool create_matrix_obj(std::string &path_of_file, data_t &some_data);
  bool note_vertexes_polygons(std::string &path_of_file, data_t &some_data);

  void help_funk_vertexes_polygons(std::string &lineptr, data_t &some_data,
                                   int &count_polygon);
};
}      // namespace s21
#endif  // PARSER_H_
