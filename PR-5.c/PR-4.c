#include <stdio.h>

int main()
{
    int r, c, i, j;
    int a[10][10];
    int row, col;
    int rowSum = 0, colSum = 0;

    printf("Enter row size: ");
    scanf("%d", &r);

    printf("Enter column size: ");
    scanf("%d", &c);

    printf("Enter array elements:\n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter row number: ");
    scanf("%d", &row);

    printf("Elements of row %d: ", row);
    for(j = 0; j < c; j++)
    {
        printf("%d ", a[row][j]);
        rowSum += a[row][j];
    }

    printf("\nThe sum of row %d: %d\n", row, rowSum);

    printf("\nEnter col number: ");
    scanf("%d", &col);

    printf("Elements of col %d: ", col);
    for(i = 0; i < r; i++)
    {
        printf("%d ", a[i][col]);
        colSum += a[i][col];
    }

    printf("\nThe sum of col %d: %d\n", col, colSum);

    
}