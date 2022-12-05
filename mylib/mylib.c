#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

void multiply_vector_matrix(int *matrix, int *vector_input, int *vector_output, int N)
{
  int i;
  for (i = 0; i < N; i++)
  {
    vector_output[i] = 0;
    int j;
    for (j = 0; j < N; j++)
    {
      vector_output[i] += matrix[i * N + j] * vector_input[j];
    }
  }
}

void print_vector(int *vector, int N)
{
  printf("vector = [\n");

  int i;
  for (i = 0; i < N; i++)
  {
    printf("%d\n", vector[i]);
  }

  printf("]\n");
}

void print_matrix(int *matrix, int N)
{
  printf("matrix = [\n");

  int i;
  for (i = 0; i < N; i++)
  {
    printf("[");
    int j;
    for (j = 0; j < N; j++)
    {
      printf("%-3d", matrix[i * N + j]);

      if (j < N - 1)
      {
        printf(",");
      }
    }
    printf("],\n");
  }

  printf("]\n");
}

void test_multiply_vector_matrix(int *matrix, int *vector, int N, int *vector_expected)
{
  int *vector_result = (int*)malloc(N * sizeof(int));

  if (vector_result == NULL)
  {
    printf("Malloc is failed!\n");
    return;
  }
  
  multiply_vector_matrix(matrix, vector, vector_result, N);

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
