#include "../src/lib.c"
#include <criterion/criterion.h>

Test(lib_function_suite, test_addition_positive_numbers) {
  int result = lib_function(2, 3);
  cr_assert(result == 5, "Expected 2 + 3 to equal 5, but got %d", result);
}
