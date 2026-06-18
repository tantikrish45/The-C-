#include <stdio.h>
main()

{
    int num;

    printf(" Enter the elements : ");
    scanf("%d", &num);

    int i, j;
    int a[num];

    for (int i = 0; i < num; i++)
    {
        printf("Enter a[%d] : ", i);
        scanf("%d", &a[i]);
    }

    for (i = 0; i < num; i++)
    {
        if (a[i] < 0)
        {
            printf("Negative number is : %d\n", a[i]);
        }
    }
    printf("\n");
}