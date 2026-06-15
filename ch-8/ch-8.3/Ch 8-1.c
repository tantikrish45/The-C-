#include <stdio.h>

main()
{
    int a[2][3] = {{12, 1, 14}, {16, 17, 18}};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d", a[i][j]);
        }
        printf("\n");
    }
}