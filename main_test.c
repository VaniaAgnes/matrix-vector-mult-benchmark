#include <stdio.h>
#include "mylib/mylib.h"

int main()
{
  int T = 4;
  int N = 3;

  int matrix_input_test_case[4][9] = {
    {1, 2, 3, 4, 5, 6, 7, 8, 9},
    {2, 1, 5, 1, 5, 3, 2, 4, 2},
    {3, 4, 4, 2, 4, 3, 2, 1, 3},
    {4, 2, 1, 3, 1, 3, 1, 3, 2}
  };

  int vector_input_test_case[4][3] = {
    {0, 0, 0},
    {1, 4, 2},
    {2, 2, 5},
    {1, 3, 1}
  };

  int vector_expected_test_case[4][3] = {
    {0, 0, 0},
    {16, 27, 22},
    {34, 27, 21},
    {11, 9, 12},
  };

  int i;
  for (i = 0; i < T; i++)
  {
    printf("Test #%d:\n", i + 1);
    test_multiply_vector_matrix(
      matrix_input_test_case[i],
      vector_input_test_case[i],
      N,
      vector_expected_test_case[i]
    );
    printf("\n");
  }

  return 0;
}
