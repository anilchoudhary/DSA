#include<stdio.h>
#define MAX 10
void largestInEachCol(int mat[][MAX], int rows, int cols)
{
   for (int i = 0; i < cols; i++)
   {
      int max_col_element = mat[0][i];
      for (int j = 1; j < rows; j++)
      {
         if (mat[j][i] > max_col_element)
            max_col_element = mat[j][i];
      }
      printf("%d\n", max_col_element );
   }
}
int main()
{
   int row = 4, col = 4;
   int mat[][MAX] = {
      { 23, 7, 21, 1 },
      { 1, 84, 9, 11 },
      { 3, 4, 1, 81 },
      { 2, 1, 44, 5 },
   };
   largestInEachCol(mat, row, col);
}