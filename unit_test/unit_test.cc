#include <gtest/gtest.h>

#include "../model/model.h"

/**
 *  MODEL UNIT_TESTS
 */

TEST(MODEL, parser_with_file) {
  s21::data_t some_data;
  s21::Model test;
  std::string path_of_file = "./obj/coob.obj";
  ASSERT_TRUE(test.count_vertexes_polygons(path_of_file, some_data));
  ASSERT_TRUE(test.create_matrix_obj(path_of_file, some_data));
  ASSERT_TRUE(test.note_vertexes_polygons(path_of_file, some_data));
}

TEST(MODEL, parser_with_file_2) {
  std::string path_of_file = "./obj/Car_no_file.obj";
  s21::data_t some_data;
  s21::Model test;
  ASSERT_FALSE(test.count_vertexes_polygons(path_of_file, some_data));
  ASSERT_FALSE(test.create_matrix_obj(path_of_file, some_data));
  ASSERT_FALSE(test.note_vertexes_polygons(path_of_file, some_data));
}

TEST(MODEL, move_obj) {
  s21::data_t some_data;
  s21::Model test;
  for (int i = 0; i < some_data.matrix.get_rows(); i++) 
    for (size_t j = 0; j < 3; j++)
      some_data.matrix(i, j) = 0;

  test.move_obj(some_data, 1, 1, 1);
  for (int i = 0; i < some_data.matrix.get_rows(); i++)
    for (size_t j = 0; j < 3; j++)
      ASSERT_DOUBLE_EQ(some_data.matrix(i, j), 1);
}

TEST(MODEL, scale_obj) {
  s21::data_t some_data;
  s21::Model test;
  some_data.matrix.set_rows_cols(3, 3);
  for (int i = 0; i < some_data.matrix.get_rows(); i++)
    for (size_t j = 0; j < 3; j++)
      some_data.matrix(i, j) = 1;

  test.scale_obj(some_data, 2);
  for (int i = 0; i < some_data.matrix.get_rows(); i++)
    for (size_t j = 0; j < 3; j++)
      ASSERT_DOUBLE_EQ(some_data.matrix(i, j), 2);
}

TEST(MODEL, rot_ox) {
  s21::data_t some_data;
  s21::Model test;
  some_data.matrix.set_rows_cols(3, 3);
  some_data.matrix(0, 0) = 1;
  some_data.matrix(0, 1) = 1;
  some_data.matrix(0, 2) = 1;
  some_data.matrix(1, 0) = 1;
  some_data.matrix(1, 1) = 1;
  some_data.matrix(1, 2) = 1;
  some_data.matrix(2, 0) = 1;
  some_data.matrix(2, 1) = 1;
  some_data.matrix(2, 2) = 1;

  test.rotation_by_ox(some_data, 0);

  ASSERT_DOUBLE_EQ(some_data.matrix(0, 0), 1);
  ASSERT_DOUBLE_EQ(some_data.matrix(0, 1), 1);
  ASSERT_DOUBLE_EQ(some_data.matrix(0, 2), 1);
  ASSERT_DOUBLE_EQ(some_data.matrix(1, 0), 1);
  ASSERT_DOUBLE_EQ(some_data.matrix(1, 1), 1);
  ASSERT_DOUBLE_EQ(some_data.matrix(1, 2), 1);
  ASSERT_DOUBLE_EQ(some_data.matrix(2, 0), 1);
  ASSERT_DOUBLE_EQ(some_data.matrix(2, 1), 1);
  ASSERT_DOUBLE_EQ(some_data.matrix(2, 2), 1);
}

TEST(MODEL, rot_oy_test) {
  s21::data_t some_data;
  s21::Model test;
  some_data.matrix.set_rows_cols(3, 3);
  some_data.matrix(0, 0) = 1;
  some_data.matrix(0, 1) = 1;
  some_data.matrix(0, 2) = 1;
  some_data.matrix(1, 0) = 1;
  some_data.matrix(1, 1) = 1;
  some_data.matrix(1, 2) = 1;
  some_data.matrix(2, 0) = 1;
  some_data.matrix(2, 1) = 1;
  some_data.matrix(2, 2) = 1;
  test.rotation_by_oy(some_data, 0);
  ASSERT_DOUBLE_EQ(some_data.matrix(0, 0), 1);
  ASSERT_DOUBLE_EQ(some_data.matrix(0, 1), 1);
  ASSERT_DOUBLE_EQ(some_data.matrix(0, 2), 1);
  ASSERT_DOUBLE_EQ(some_data.matrix(1, 0), 1);
  ASSERT_DOUBLE_EQ(some_data.matrix(1, 1), 1);
  ASSERT_DOUBLE_EQ(some_data.matrix(1, 2), 1);
  ASSERT_DOUBLE_EQ(some_data.matrix(2, 0), 1);
  ASSERT_DOUBLE_EQ(some_data.matrix(2, 1), 1);
  ASSERT_DOUBLE_EQ(some_data.matrix(2, 2), 1);
}

TEST(MODEL, rot_oz_test) {
  s21::data_t some_data;
  s21::Model test;
  some_data.matrix.set_rows_cols(3, 3);
  some_data.matrix(0, 0) = 1;
  some_data.matrix(0, 1) = 1;
  some_data.matrix(0, 2) = 1;
  some_data.matrix(1, 0) = 1;
  some_data.matrix(1, 1) = 1;
  some_data.matrix(1, 2) = 1;
  some_data.matrix(2, 0) = 1;
  some_data.matrix(2, 1) = 1;
  some_data.matrix(2, 2) = 1;
  test.rotation_by_oz(some_data, 0);
  ASSERT_DOUBLE_EQ(some_data.matrix(0, 0), 1);
  ASSERT_DOUBLE_EQ(some_data.matrix(0, 1), 1);
  ASSERT_DOUBLE_EQ(some_data.matrix(0, 2), 1);
  ASSERT_DOUBLE_EQ(some_data.matrix(1, 0), 1);
  ASSERT_DOUBLE_EQ(some_data.matrix(1, 1), 1);
  ASSERT_DOUBLE_EQ(some_data.matrix(1, 2), 1);
  ASSERT_DOUBLE_EQ(some_data.matrix(2, 0), 1);
  ASSERT_DOUBLE_EQ(some_data.matrix(2, 1), 1);
  ASSERT_DOUBLE_EQ(some_data.matrix(2, 2), 1);
}

/**
 *  MATRIX UNIT_TESTS
 */

TEST(MATRIX, s21_eq_matrix_test_1) {
    S21Matrix mtx(3, 3);
    S21Matrix mtx_2(3, 3);
    mtx.gen_mtx();
    mtx_2.gen_mtx();
    try {
        ASSERT_TRUE(mtx == mtx_2);
    }
    catch(const char* e) {
        std::cout << e << std::endl;
    }
}

TEST(MATRIX, s21_eq_matrix_test_2) {
    S21Matrix mtx(3, 3);
    S21Matrix mtx_2(3, 3);
    mtx.gen_mtx();
    mtx_2.gen_mtx_rev();
    try {
        ASSERT_FALSE(mtx == mtx_2);
    }
    catch(const char* e) {
        std::cout << e << std::endl;
    }
}

TEST(MATRIX, s21_sum_matrix_test_1) {
    S21Matrix mtx(3, 3);
    S21Matrix mtx_2(3, 3);
    S21Matrix mtx_result(3, 3);
    mtx.gen_mtx();
    mtx_2.gen_mtx_rev();
    mtx += mtx_2;
    for (int i = 0; i < mtx.get_rows(); i++)
        for (int j = 0; j < mtx.get_cols(); j++)
            mtx_result(i, j) = 33;
    try {
        EXPECT_EQ(mtx_result.eq_matrix(mtx), true);
    }
    catch(const char* e) {
        std::cout << e << std::endl;
    }
}

TEST(MATRIX, s21_sum_matrix_test_2) {
    S21Matrix mtx(3, 3);
    S21Matrix mtx_2(3, 3);
    S21Matrix mtx_result(3, 3);
    mtx.gen_mtx();
    mtx_2.gen_mtx_rev();
    mtx.sum_matrix(mtx_2);
    for (int i = 0; i < mtx.get_rows(); i++)
        for (int j = 0; j < mtx.get_cols(); j++)
            mtx_result(i, j) = 33;
    try {
        EXPECT_EQ(mtx_result.eq_matrix(mtx), true);
    } catch(const char* e) {
        std::cout << e << std::endl;
    }
}

TEST(MATRIX, s21_sum_matrix_test_3) {
    S21Matrix mtx(3, 3);
    S21Matrix mtx_2(3, 3);
    S21Matrix mtx_result(3, 3);
    mtx.gen_mtx();
    mtx_2.gen_mtx_rev();
    mtx = mtx + mtx_2;
    for (int i = 0; i < mtx.get_rows(); i++)
        for (int j = 0; j < mtx.get_cols(); j++)
            mtx_result(i, j) = 33;
    try {
        EXPECT_EQ(mtx_result.eq_matrix(mtx), true);
    } catch(const char* e) {
        std::cout << e << std::endl;
    }
}

TEST(MATRIX, s21_sub_matrix_test_1) {
    S21Matrix mtx(3, 3);
    S21Matrix mtx_2(3, 3);
    S21Matrix mtx_result(3, 3);

    mtx.gen_mtx();
    mtx_2.gen_mtx();
    mtx -= mtx_2;
    for (int i = 0; i < mtx.get_rows(); i++)
        for (int j = 0; j < mtx.get_cols(); j++)
            mtx_result(i, j) = 0;
    try {
        EXPECT_EQ(mtx_result.eq_matrix(mtx), true);
    } catch(const char* e) {
        std::cout << e << std::endl;
    }
}

TEST(MATRIX, s21_sub_matrix_test_2) {
    S21Matrix mtx(3, 3);
    S21Matrix mtx_2(3, 3);
    S21Matrix mtx_result(3, 3);

    mtx.gen_mtx();
    mtx_2.gen_mtx();
    mtx.sub_matrix(mtx_2);
    for (int i = 0; i < mtx.get_rows(); i++)
        for (int j = 0; j < mtx.get_cols(); j++)
            mtx_result(i, j) = 0;
    try {
        EXPECT_EQ(mtx_result.eq_matrix(mtx), true);
    } catch(const char* e) {
        std::cout << e << std::endl;
    }
}

TEST(MATRIX, s21_sub_matrix_test_3) {
    S21Matrix mtx(3, 3);
    S21Matrix mtx_2(3, 3);
    S21Matrix mtx_result(3, 3);

    mtx.gen_mtx();
    mtx_2.gen_mtx();
    mtx = mtx - mtx_2;
    for (int i = 0; i < mtx.get_rows(); i++)
        for (int j = 0; j < mtx.get_cols(); j++)
            mtx_result(i, j) = 0;
    try {
        EXPECT_EQ(mtx_result.eq_matrix(mtx), true);
    } catch(const char* e) {
        std::cout << e << std::endl;
    }
}

TEST(MATRIX, s21_mult_number_test_1) {
    S21Matrix mtx(3, 3);
    S21Matrix mtx_result(3, 3);
    mtx.gen_mtx();
    mtx_result = mtx;
    mtx *= 2;
    for (int i = 0; i < mtx.get_rows(); i++)
        for (int j = 0; j < mtx.get_cols(); j++)
            mtx_result(i, j) *= 2;
    try {
        EXPECT_EQ(mtx_result.eq_matrix(mtx), true);
    } catch(const char* e) {
        std::cout << e << std::endl;
    }
}

TEST(MATRIX, s21_mult_number_test_2) {
    S21Matrix mtx(3, 3);
    S21Matrix mtx_result(3, 3);
    mtx.gen_mtx();
    mtx_result = mtx;
    mtx = mtx * 2;
    for (int i = 0; i < mtx.get_rows(); i++)
        for (int j = 0; j < mtx.get_cols(); j++)
            mtx_result(i, j) *= 2;
    try {
        EXPECT_EQ(mtx_result.eq_matrix(mtx), true);
    } catch(const char* e) {
        std::cout << e << std::endl;
    }
}

TEST(MATRIX, s21_mult_matrix_test_1) {
    S21Matrix mtx(3, 2);
    S21Matrix mtx_2(2, 3);
    S21Matrix result(3, 3);
    S21Matrix mtx_result(3, 3);
    mtx.gen_mtx();
    mtx_2.gen_mtx();
    mtx_result(0, 0) = 9;
    mtx_result(0, 1) = 12;
    mtx_result(0, 2) = 15;
    mtx_result(1, 0) = 19;
    mtx_result(1, 1) = 26;
    mtx_result(1, 2) = 33;
    mtx_result(2, 0) = 29;
    mtx_result(2, 1) = 40;
    mtx_result(2, 2) = 51;
    result = mtx * mtx_2;
    try {
        EXPECT_EQ(mtx_result.eq_matrix(result), true);
    } catch(const char* e) {
        std::cout << e << std::endl;
    }
}

TEST(MATRIX, s21_mult_matrix_test_2) {
    S21Matrix mtx(3, 2);
    S21Matrix mtx_2(2, 3);
    S21Matrix result(3, 3);
    S21Matrix mtx_result(3, 3);
    mtx.gen_mtx();
    mtx_2.gen_mtx();
    mtx_result(0, 0) = 9;
    mtx_result(0, 1) = 12;
    mtx_result(0, 2) = 15;
    mtx_result(1, 0) = 19;
    mtx_result(1, 1) = 26;
    mtx_result(1, 2) = 33;
    mtx_result(2, 0) = 29;
    mtx_result(2, 1) = 40;
    mtx_result(2, 2) = 51;
    mtx.mul_matrix(mtx_2);
    try {
        EXPECT_EQ(mtx_result.eq_matrix(mtx), true);
    } catch(const char* e) {
        std::cout << e << std::endl;
    }
}

TEST(MATRIX, s21_mult_matrix_test_3) {
    S21Matrix mtx(3, 2);
    S21Matrix mtx_2(2, 3);
    S21Matrix result(3, 3);
    S21Matrix mtx_result(3, 3);
    mtx.gen_mtx();
    mtx_2.gen_mtx();
    mtx_result(0, 0) = 9;
    mtx_result(0, 1) = 12;
    mtx_result(0, 2) = 15;
    mtx_result(1, 0) = 19;
    mtx_result(1, 1) = 26;
    mtx_result(1, 2) = 33;
    mtx_result(2, 0) = 29;
    mtx_result(2, 1) = 40;
    mtx_result(2, 2) = 51;
    mtx *= mtx_2;
    try {
        EXPECT_EQ(mtx_result.eq_matrix(mtx), true);
    } catch(const char* e) {
        std::cout << e << std::endl;
    }
}

TEST(MATRIX, s21_transpose_test_1) {
    S21Matrix mtx(3, 2);
    S21Matrix mtx_result_defolt(2, 3);
    S21Matrix mtx_result;
    mtx.gen_mtx();
    mtx_result_defolt(0, 0) = 1;
    mtx_result_defolt(0, 1) = 3;
    mtx_result_defolt(0, 2) = 5;
    mtx_result_defolt(1, 0) = 2;
    mtx_result_defolt(1, 1) = 4;
    mtx_result_defolt(1, 2) = 6;
    mtx_result = mtx.transpose();
    try {
        EXPECT_EQ(mtx_result.eq_matrix(mtx_result_defolt), true);
    } catch(const char* e) {
        std::cout << e << std::endl;
    }
}

TEST(MATRIX, s21_determinant_test_1) {
    S21Matrix mtx(3, 3);

    mtx(0, 0) = 0;
    mtx(0, 1) = 9;
    mtx(0, 2) = 5;
    mtx(1, 0) = 4;
    mtx(1, 1) = 3;
    mtx(1, 2) = -5;
    mtx(2, 0) = -1;
    mtx(2, 1) = 6;
    mtx(2, 2) = -4;
    try {
        EXPECT_EQ(mtx.determinant(), 324);
    } catch(const char* e) {
        std::cout << e << std::endl;
    }
}

TEST(MATRIX, s21_calc_complements_test_1) {
    S21Matrix mtx(3, 3), mtx_2(3, 3), result(3, 3);
    mtx(0, 0) = 1;
    mtx(0, 1) = 2;
    mtx(0, 2) = 3;
    mtx(1, 0) = 0;
    mtx(1, 1) = 4;
    mtx(1, 2) = 2;
    mtx(2, 0) = 5;
    mtx(2, 1) = 2;
    mtx(2, 2) = 1;
    result = mtx.calc_complements();
    mtx_2(0, 0) = 0;
    mtx_2(0, 1) = 10;
    mtx_2(0, 2) = -20;
    mtx_2(1, 0) = 4;
    mtx_2(1, 1) = -14;
    mtx_2(1, 2) = 8;
    mtx_2(2, 0) = -8;
    mtx_2(2, 1) = -2;
    mtx_2(2, 2) = 4;
    try {
        for (int i = 0; i < result.get_rows(); i++) {
            for (int j = 0; j < result.get_cols(); j++) {
                EXPECT_EQ(result(i, j), mtx_2(i, j));
            }
        }
    } catch(const char* e) {
        std::cout << e << std::endl;
    }
}

TEST(MATRIX, s21_inverse_matrix_test_1) {
    S21Matrix mtx(3, 3), result(3, 3), result_defolt(3, 3);
    mtx(0, 0) = 2;
    mtx(0, 1) = 5;
    mtx(0, 2) = 7;
    mtx(1, 0) = 6;
    mtx(1, 1) = 3;
    mtx(1, 2) = 4;
    mtx(2, 0) = 5;
    mtx(2, 1) = -2;
    mtx(2, 2) = -3;
    result_defolt(0, 0) = 1;
    result_defolt(0, 1) = -1;
    result_defolt(0, 2) = 1;
    result_defolt(1, 0) = -38;
    result_defolt(1, 1) = 41;
    result_defolt(1, 2) = -34;
    result_defolt(2, 0) = 27;
    result_defolt(2, 1) = -29;
    result_defolt(2, 2) = 24;
    result = mtx.inverse_matrix();
    try {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                EXPECT_EQ(result(i, j), result_defolt(i, j));
            }
        }
     } catch(const char* e) {
        std::cout << e << std::endl;
    }
    result.set_cols(3);
    result.set_rows(3);
}

TEST(MATRIX, s21_set_cols_test_1) {
    S21Matrix mtx(3, 3), result(3, 6);
    mtx.set_cols(6);
    for (int i = 0; i < result.get_rows(); i++)
        for (int j = 0; j < result.get_cols(); j++)
            EXPECT_EQ(result(i, j), mtx(i, j));
}

TEST(MATRIX, s21_set_cols_test_2) {
    S21Matrix mtx(3, 3), result(3, 2);
    mtx.set_cols(2);
    for (int i = 0; i < result.get_rows(); i++)
        for (int j = 0; j < result.get_cols(); j++)
            EXPECT_EQ(result(i, j), mtx(i, j));
}

TEST(MATRIX, s21_set_rows_test_1) {
    S21Matrix mtx(3, 3), result(6, 3);
    mtx.set_rows(6);
    for (int i = 0; i < result.get_rows(); i++)
        for (int j = 0; j < result.get_cols(); j++)
            EXPECT_EQ(result(i, j), mtx(i, j));
}

TEST(MATRIX, s21_set_rows_test_2) {
    S21Matrix mtx(3, 3), result(2, 3);
    mtx.set_rows(2);
    for (int i = 0; i < result.get_rows(); i++)
        for (int j = 0; j < result.get_cols(); j++)
            EXPECT_EQ(result(i, j), mtx(i, j));
}

TEST(MATRIX, s21_set_rows_cols) {
    S21Matrix mtx, result(2, 3);
    mtx.set_rows_cols(2, 3);
    for (int i = 0; i < result.get_rows(); i++)
        for (int j = 0; j < result.get_cols(); j++)
            EXPECT_EQ(result(i, j), mtx(i, j));
}

int main(int argc, char *argv[]) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
