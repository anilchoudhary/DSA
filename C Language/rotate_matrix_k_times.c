#include <iostream>
#define M 3
#define N 3
using namespace std;

void displayMatrix(int matrix[][M])
{
  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < M; j++)
    {
      printf("%d ", matrix[i][j] );
    }
    printf("\n");
  }
}

int main()
{
  int matrix[N][M] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
  };
  printf("The given matrix is \n");
  displayMatrix(matrix);
  int temp[M];
  int k = 2;
  k = k % M;

  for (int i = 0; i < N; i++)
  {
    for (int t = 0; t < M - k; t++)
    {
      temp[t] = matrix[i][t];
    }
    for (int j = M - k; j < M; j++)
    {
      matrix[i][j - M + k] = matrix[i][j];
    }
    for (int j = k; j < M; j++)
    {
      matrix[i][j] = temp[j - k];
    }
  }
  printf("\nThe rotated matrix is\n");

  displayMatrix(matrix);
  return 0;
}