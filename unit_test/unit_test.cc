#include <gtest/gtest.h>

#include "../model/model.h"

TEST(Test_s21_3D_Viewer_v2, test_1) {
  // ASSERT_EQ(result, 3.5);
}

// START_TEST(test_parser_with_file) {
//   char path_of_file[500] = "../obj/Car.obj";
//   data_t some_data;
//   int error = count_vertexes_polygons(path_of_file, &some_data);
//   if (error == 0) {
//     error = create_matrix_obj(path_of_file, &some_data);
//     if (error == 0) {
//       error = note_vertexes_polygons(path_of_file, &some_data);
//       if (error == 0) {
//         s21_remove_matrix(&some_data.matrix);
//         for (int i = 0; i < some_data.count_of_polygons; i++)
//           free(some_data.polygons[i].vertexes);
//         free(some_data.polygons);
//       }
//     }
//   }
//   ck_assert_double_eq(error, 0);
// }
// END_TEST

// START_TEST(test_n_v_p) {
//   char path_of_file[500] = "../obj/Car1.obj";
//   data_t some_data;
//   int error = note_vertexes_polygons(path_of_file, &some_data);
//   ck_assert_double_eq(error, 1);
//   for (int i = 0; i < some_data.count_of_polygons; i++)
//     free(some_data.polygons[i].vertexes);
//   free(some_data.polygons);
// }
// END_TEST

// START_TEST(move_obj_test) {
//   data_t some_data;
//   s21_create_matrix(3, 3, &some_data.matrix);
//   for (int i = 0; i < some_data.matrix.rows; i++) {
//     some_data.matrix.matrix[i][0] = 0;
//     some_data.matrix.matrix[i][1] = 0;
//     some_data.matrix.matrix[i][2] = 0;
//   }
//   move_obj(&some_data, 1, 1, 1);
//   for (int i = 0; i < some_data.matrix.rows; i++) {
//     ck_assert_double_eq(some_data.matrix.matrix[i][0], 1);
//     ck_assert_double_eq(some_data.matrix.matrix[i][1], 1);
//     ck_assert_double_eq(some_data.matrix.matrix[i][2], 1);
//   }
//   s21_remove_matrix(&some_data.matrix);
// }
// END_TEST

// START_TEST(scale_obj_test) {
//   data_t some_data;
//   s21_create_matrix(3, 3, &some_data.matrix);
//   for (int i = 0; i < some_data.matrix.rows; i++) {
//     some_data.matrix.matrix[i][0] = 1;
//     some_data.matrix.matrix[i][1] = 1;
//     some_data.matrix.matrix[i][2] = 1;
//   }
//   scale_obj(&some_data, 2);
//   for (int i = 0; i < some_data.matrix.rows; i++) {
//     ck_assert_double_eq(some_data.matrix.matrix[i][0], 2);
//     ck_assert_double_eq(some_data.matrix.matrix[i][1], 2);
//     ck_assert_double_eq(some_data.matrix.matrix[i][2], 2);
//   }
//   s21_remove_matrix(&some_data.matrix);
// }
// END_TEST

// START_TEST(rot_ox_test) {
//   data_t some_data;
//   s21_create_matrix(3, 3, &some_data.matrix);
//   some_data.matrix.matrix[0][0] = 1;
//   some_data.matrix.matrix[0][1] = 1;
//   some_data.matrix.matrix[0][2] = 1;
//   some_data.matrix.matrix[1][0] = 1;
//   some_data.matrix.matrix[1][1] = 1;
//   some_data.matrix.matrix[1][2] = 1;
//   some_data.matrix.matrix[2][0] = 1;
//   some_data.matrix.matrix[2][1] = 1;
//   some_data.matrix.matrix[2][2] = 1;
//   rotation_by_ox(&some_data, 0);
//   ck_assert_double_eq(some_data.matrix.matrix[0][0], 1);
//   ck_assert_double_eq(some_data.matrix.matrix[0][1], 1);
//   ck_assert_double_eq(some_data.matrix.matrix[0][2], 1);
//   ck_assert_double_eq(some_data.matrix.matrix[1][0], 1);
//   ck_assert_double_eq(some_data.matrix.matrix[1][1], 1);
//   ck_assert_double_eq(some_data.matrix.matrix[1][2], 1);
//   ck_assert_double_eq(some_data.matrix.matrix[2][0], 1);
//   ck_assert_double_eq(some_data.matrix.matrix[2][1], 1);
//   ck_assert_double_eq(some_data.matrix.matrix[2][2], 1);
//   s21_remove_matrix(&some_data.matrix);
// }
// END_TEST

// START_TEST(rot_oy_test) {
//   data_t some_data;
//   s21_create_matrix(3, 3, &some_data.matrix);
//   some_data.matrix.matrix[0][0] = 1;
//   some_data.matrix.matrix[0][1] = 1;
//   some_data.matrix.matrix[0][2] = 1;
//   some_data.matrix.matrix[1][0] = 1;
//   some_data.matrix.matrix[1][1] = 1;
//   some_data.matrix.matrix[1][2] = 1;
//   some_data.matrix.matrix[2][0] = 1;
//   some_data.matrix.matrix[2][1] = 1;
//   some_data.matrix.matrix[2][2] = 1;
//   rotation_by_oy(&some_data, 0);
//   ck_assert_double_eq(some_data.matrix.matrix[0][0], 1);
//   ck_assert_double_eq(some_data.matrix.matrix[0][1], 1);
//   ck_assert_double_eq(some_data.matrix.matrix[0][2], 1);
//   ck_assert_double_eq(some_data.matrix.matrix[1][0], 1);
//   ck_assert_double_eq(some_data.matrix.matrix[1][1], 1);
//   ck_assert_double_eq(some_data.matrix.matrix[1][2], 1);
//   ck_assert_double_eq(some_data.matrix.matrix[2][0], 1);
//   ck_assert_double_eq(some_data.matrix.matrix[2][1], 1);
//   ck_assert_double_eq(some_data.matrix.matrix[2][2], 1);
//   s21_remove_matrix(&some_data.matrix);
// }
// END_TEST

// START_TEST(rot_oz_test) {
//   data_t some_data;
//   s21_create_matrix(3, 3, &some_data.matrix);
//   some_data.matrix.matrix[0][0] = 1;
//   some_data.matrix.matrix[0][1] = 1;
//   some_data.matrix.matrix[0][2] = 1;
//   some_data.matrix.matrix[1][0] = 1;
//   some_data.matrix.matrix[1][1] = 1;
//   some_data.matrix.matrix[1][2] = 1;
//   some_data.matrix.matrix[2][0] = 1;
//   some_data.matrix.matrix[2][1] = 1;
//   some_data.matrix.matrix[2][2] = 1;
//   rotation_by_oz(&some_data, 0);
//   ck_assert_double_eq(some_data.matrix.matrix[0][0], 1);
//   ck_assert_double_eq(some_data.matrix.matrix[0][1], 1);
//   ck_assert_double_eq(some_data.matrix.matrix[0][2], 1);
//   ck_assert_double_eq(some_data.matrix.matrix[1][0], 1);
//   ck_assert_double_eq(some_data.matrix.matrix[1][1], 1);
//   ck_assert_double_eq(some_data.matrix.matrix[1][2], 1);
//   ck_assert_double_eq(some_data.matrix.matrix[2][0], 1);
//   ck_assert_double_eq(some_data.matrix.matrix[2][1], 1);
//   ck_assert_double_eq(some_data.matrix.matrix[2][2], 1);
//   s21_remove_matrix(&some_data.matrix);
// }
// END_TEST

// START_TEST(test_parser_without_file) {
//   char path_of_file[500] = "../obj/Car_no_file.obj";
//   data_t some_data;
//   int error = count_vertexes_polygons(path_of_file, &some_data);
//   if (error == 1) {
//     char error_text[100] =
//         "No such file in the directory. Please check the name of file.";
//     ck_assert_msg(
//         error_text,
//         "No such file in the directory. Please check the name of file.");
//   }
//   ck_assert_double_eq(error, 1);
// }
// END_TEST

// START_TEST(s21_sum_matrix_test) {
//   matrix_t test1;
//   matrix_t test2;
//   matrix_t result_by_func;
//   s21_create_matrix(2, 2, &test1);
//   s21_create_matrix(2, 2, &test2);
//   s21_matrix_creator(&test1, 1.0);
//   s21_matrix_creator(&test2, 1.0);
//   s21_sum_matrix(&test1, &test2, &result_by_func);
//   matrix_t result_by_hands;
//   s21_create_matrix(2, 2, &result_by_hands);
//   result_by_hands.matrix[0][0] = 2.;
//   result_by_hands.matrix[0][1] = 4.;
//   result_by_hands.matrix[1][0] = 6.;
//   result_by_hands.matrix[1][1] = 8.;
//   ck_assert_int_eq(s21_eq_matrix(&result_by_func, &result_by_hands), SUCCESS);
//   s21_remove_matrix(&test1);
//   s21_remove_matrix(&test2);
//   s21_remove_matrix(&result_by_func);
//   s21_remove_matrix(&result_by_hands);
// }
// END_TEST

// START_TEST(s21_sub_matrix_test) {
//   matrix_t test1;
//   matrix_t test2;
//   matrix_t result_by_func;
//   s21_create_matrix(2, 2, &test1);
//   s21_create_matrix(2, 2, &test2);
//   s21_matrix_creator(&test1, 1.0);
//   s21_matrix_creator(&test2, 1.0);
//   s21_sub_matrix(&test1, &test2, &result_by_func);
//   matrix_t result_by_hands;
//   s21_create_matrix(2, 2, &result_by_hands);
//   result_by_hands.matrix[0][0] = 0.;
//   result_by_hands.matrix[0][1] = 0.;
//   result_by_hands.matrix[1][0] = 0.;
//   result_by_hands.matrix[1][1] = 0.;
//   ck_assert_int_eq(s21_eq_matrix(&result_by_func, &result_by_hands), SUCCESS);
//   s21_remove_matrix(&test1);
//   s21_remove_matrix(&test2);
//   s21_remove_matrix(&result_by_func);
//   s21_remove_matrix(&result_by_hands);
// }
// END_TEST

// START_TEST(s21_mult_number_test) {
//   matrix_t test1;
//   matrix_t result_by_func;
//   s21_create_matrix(3, 3, &test1);
//   s21_matrix_creator(&test1, 1.0);
//   double number = 2;
//   s21_mult_number(&test1, number, &result_by_func);
//   matrix_t result_by_hands;
//   s21_create_matrix(3, 3, &result_by_hands);
//   result_by_hands.matrix[0][0] = 2.;
//   result_by_hands.matrix[0][1] = 4.;
//   result_by_hands.matrix[0][2] = 6.;
//   result_by_hands.matrix[1][0] = 8.;
//   result_by_hands.matrix[1][1] = 10.;
//   result_by_hands.matrix[1][2] = 12.;
//   result_by_hands.matrix[2][0] = 14.;
//   result_by_hands.matrix[2][1] = 16.;
//   result_by_hands.matrix[2][2] = 18.;
//   ck_assert_int_eq(s21_eq_matrix(&result_by_func, &result_by_hands), SUCCESS);
//   s21_remove_matrix(&test1);
//   s21_remove_matrix(&result_by_func);
//   s21_remove_matrix(&result_by_hands);
// }
// END_TEST

// START_TEST(s21_mult_matrix_test) {
//   matrix_t test1;
//   matrix_t test2;
//   matrix_t result_by_func;
//   s21_create_matrix(3, 3, &test1);
//   s21_create_matrix(3, 3, &test2);
//   s21_matrix_creator(&test1, 1.0);
//   s21_matrix_creator(&test2, 2.0);
//   s21_mult_matrix(&test1, &test2, &result_by_func);
//   matrix_t result_by_hands;
//   s21_create_matrix(3, 3, &result_by_hands);
//   result_by_hands.matrix[0][0] = 36.;
//   result_by_hands.matrix[0][1] = 42.;
//   result_by_hands.matrix[0][2] = 48.;
//   result_by_hands.matrix[1][0] = 81.;
//   result_by_hands.matrix[1][1] = 96.;
//   result_by_hands.matrix[1][2] = 111.;
//   result_by_hands.matrix[2][0] = 126.;
//   result_by_hands.matrix[2][1] = 150.;
//   result_by_hands.matrix[2][2] = 174.;
//   ck_assert_int_eq(s21_eq_matrix(&result_by_func, &result_by_hands), SUCCESS);
//   s21_remove_matrix(&test1);
//   s21_remove_matrix(&test2);
//   s21_remove_matrix(&result_by_func);
//   s21_remove_matrix(&result_by_hands);
// }
// END_TEST

// START_TEST(s21_transpose_test) {
//   matrix_t test1;
//   matrix_t result_by_func;
//   s21_create_matrix(3, 3, &test1);
//   s21_matrix_creator(&test1, 1.0);
//   s21_transpose(&test1, &result_by_func);
//   matrix_t result_by_hands;
//   s21_create_matrix(3, 3, &result_by_hands);
//   result_by_hands.matrix[0][0] = 1.;
//   result_by_hands.matrix[0][1] = 4.;
//   result_by_hands.matrix[0][2] = 7.;
//   result_by_hands.matrix[1][0] = 2.;
//   result_by_hands.matrix[1][1] = 5.;
//   result_by_hands.matrix[1][2] = 8.;
//   result_by_hands.matrix[2][0] = 3.;
//   result_by_hands.matrix[2][1] = 6.;
//   result_by_hands.matrix[2][2] = 9.;
//   ck_assert_int_eq(s21_eq_matrix(&result_by_func, &result_by_hands), SUCCESS);
//   s21_remove_matrix(&test1);
//   s21_remove_matrix(&result_by_func);
//   s21_remove_matrix(&result_by_hands);
// }
// END_TEST

// START_TEST(s21_calc_complements_test) {
//   matrix_t test, result_by_hands, result_by_func;
//   s21_create_matrix(3, 3, &test);
//   test.matrix[0][0] = 1;
//   test.matrix[0][1] = 2;
//   test.matrix[0][2] = 3;
//   test.matrix[1][0] = 0;
//   test.matrix[1][1] = 4;
//   test.matrix[1][2] = 2;
//   test.matrix[2][0] = 5;
//   test.matrix[2][1] = 2;
//   test.matrix[2][2] = 1;
//   s21_calc_complements(&test, &result_by_func);
//   s21_create_matrix(3, 3, &result_by_hands);
//   result_by_hands.matrix[0][0] = 0;
//   result_by_hands.matrix[0][1] = 10;
//   result_by_hands.matrix[0][2] = -20;
//   result_by_hands.matrix[1][0] = 4;
//   result_by_hands.matrix[1][1] = -14;
//   result_by_hands.matrix[1][2] = 8;
//   result_by_hands.matrix[2][0] = -8;
//   result_by_hands.matrix[2][1] = -2;
//   result_by_hands.matrix[2][2] = 4;
//   ck_assert_int_eq(s21_eq_matrix(&result_by_func, &result_by_hands), SUCCESS);
//   s21_remove_matrix(&test);
//   s21_remove_matrix(&result_by_hands);
//   s21_remove_matrix(&result_by_func);
// }
// END_TEST

// START_TEST(s21_determinant_test) {
//   matrix_t test, result_by_hands;
//   s21_create_matrix(3, 3, &test);
//   s21_create_matrix(3, 3, &result_by_hands);
//   s21_matrix_creator(&test, 10);
//   result_by_hands.matrix[0][0] = 7.5;
//   result_by_hands.matrix[0][1] = 2.1;
//   result_by_hands.matrix[0][2] = 3.4;
//   result_by_hands.matrix[1][0] = 4.4;
//   result_by_hands.matrix[1][1] = 5.5;
//   result_by_hands.matrix[1][2] = 6.6;
//   result_by_hands.matrix[2][0] = 7.8;
//   result_by_hands.matrix[2][1] = 9.2;
//   result_by_hands.matrix[2][2] = 0.3;
//   double result, result_2;
//   s21_determinant(&test, &result);
//   s21_determinant(&result_by_hands, &result_2);
//   double result_check, result_check2;
//   result_check = 0.0;
//   result_check2 = -345.917;
//   ck_assert_ldouble_eq_tol(result, result_check, 1e-7);
//   ck_assert_ldouble_eq_tol(result_2, result_check2, 1e-7);
//   s21_remove_matrix(&test);
//   s21_remove_matrix(&result_by_hands);
// }
// END_TEST

// START_TEST(s21_inverse_matrix_test) {
//   matrix_t test, result_by_hands, result_by_func;
//   s21_create_matrix(3, 3, &test);
//   test.matrix[0][0] = 2;
//   test.matrix[0][1] = 4;
//   test.matrix[0][2] = 10;
//   test.matrix[1][0] = 10;
//   test.matrix[1][1] = 8;
//   test.matrix[1][2] = 6;
//   test.matrix[2][0] = 10;
//   test.matrix[2][1] = 6;
//   test.matrix[2][2] = 12;
//   s21_create_matrix(3, 3, &result_by_hands);
//   result_by_hands.matrix[0][0] = -0.1875;
//   result_by_hands.matrix[0][1] = -0.0375;
//   result_by_hands.matrix[0][2] = 0.175;
//   result_by_hands.matrix[1][0] = 0.1875;
//   result_by_hands.matrix[1][1] = 0.2375;
//   result_by_hands.matrix[1][2] = -0.275;
//   result_by_hands.matrix[2][0] = 0.0625;
//   result_by_hands.matrix[2][1] = -0.0875;
//   result_by_hands.matrix[2][2] = 0.075;
//   s21_inverse_matrix(&test, &result_by_func);
//   ck_assert_int_eq(s21_eq_matrix(&result_by_func, &result_by_hands), SUCCESS);
//   s21_remove_matrix(&test);
//   s21_remove_matrix(&result_by_hands);
//   s21_remove_matrix(&result_by_func);
// }
// END_TEST

int main(int argc, char *argv[]) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
