#include <stdio.h>
main()
{
    int row, col;

    printf("Enter a nuber of Row : ");
    scanf("%d", &row);
    printf("Enter a nuber of col : ");
    scanf("%d", &col);

    int a[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Enter a[%d][%d] : ", i, j);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }

    printf("\n\nArray Outout \n\n");

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {

            if (i == j)
                printf("%d ", a[i][j]);
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");
}