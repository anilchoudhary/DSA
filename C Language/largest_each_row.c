#include<stdio.h>
#define MAX 10
void largestInEachRow(int mat[][MAX], int rows, int cols)
{
   for (int i = 0; i < rows; i++)
   {
      int max_row_element = mat[i][0];
      for (int j = 1; j < cols; j++)
      {
         if (mat[i][j] > max_row_element)
            max_row_element = mat[i][j];
      }
      printf("%d\n", max_row_element );
   }
}
int main() {
   int row = 4, col = 4;
   int mat[][MAX] = {
      { 1, 84, 9, 11 },
      { 3, 4, 1, 81 },
      { 2, 1, 44, 5 },
      { 23, 7, 21, 1 },
   };
   largestInEachRow(mat, row, col);
}