#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TRUE 1

#include "utils/utils.h"
#include "mylib/mylib.h"

int main(int argc, char *argv[])
{
  srand(time(0));

  int N = atoi(argv[1]);

  int *matrix = (int *)malloc(N * N * sizeof(int));
  int *vector = (int *)malloc(N * sizeof(int));
  int *vector_result = (int *)malloc(N * sizeof(int));

  initialize_matrix(matrix, N);
  initialize_vector(vector, N);

  while (TRUE)
  {
    matVecMult(matrix, vector, vector_result, N);
  }

  return 0;
}
