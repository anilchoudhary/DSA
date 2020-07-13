#include <stdio.h>
int main()
{
    int rows, cols, sumRow, sumCol;
    int a[][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    rows = (sizeof(a) / sizeof(a[0]));
    cols = (sizeof(a) / sizeof(a[0][0])) / rows;
    for (int i = 0; i < rows; i++) {
        sumRow = 0;
        for (int j = 0; j < cols; j++) {
            sumRow = sumRow + a[i][j];
        }
        printf("Sum of %d row: %d\n", (i + 1), sumRow);
    }
    for (int i = 0; i < cols; i++) {
        sumCol = 0;
        for (int j = 0; j < rows; j++) {
            sumCol = sumCol + a[j][i];
        }
        printf("Sum of %d column: %d\n", (i + 1), sumCol);
    }
    return 0;
}