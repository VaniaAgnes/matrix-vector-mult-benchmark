#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "../utils/utils.h"

void test_multiply_vector_matrix(int *matrix, int *vector, int N, int *vector_expected)
{
  int *vector_result = (int*)malloc(N * sizeof(int));

  if (vector_result == NULL)
  {
    printf("Malloc is failed!\n");
    return;
  }
  
  matVecMult(matrix, vector, vector_result, N);

  /*
    the code to compare the result of the multiply 
    vector matrix function and the expected result
  */

  int i;
  for (i = 0; i < N; i++)
  {
    printf("Actual V[%d] = %-2d; Expected V[%d] = %-2d\n", i, vector_result[i], i, vector_expected[i]);
    assert(vector_result[i] == vector_expected[i]);
  }
}

int generate_random_int(int lower, int upper)
{
  return (rand() % (upper - lower + 1)) + lower;
}

void initialize_matrix(int *matrix, int N)
{
  int i;
  for (i = 0; i < N * N; i++)
  {
    matrix[i] = generate_random_int(0, 10);
  }
}

void initialize_vector(int *vector, int N)
{
  int i;
  for (i = 0; i < N; i++)
  {
    vector[i] = generate_random_int(0, 10);
  }
}
