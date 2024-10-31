#include "./sum_of_squares.c"
#include <criterion/criterion.h>

Test(sum_of_squares_suite, test_sum_of_squares_1) {
  int result = sum_of_squares(1);
  cr_assert(result == 1,
            "Expected sum of first 1 squares to equal 1, but got %d", result);
}

Test(sum_of_squares_suite, test_sum_of_squares_2) {
  int result = sum_of_squares(2);
  cr_assert(result == 5,
            "Expected sum of first 2 squares to equal 5, but got %d", result);
}

Test(sum_of_squares_suite, test_sum_of_squares_3) {
  int result = sum_of_squares(13);
  cr_assert(result == 819,
            "Expected sum of first 13 squares to equal 819, but got %d",
            result);
}