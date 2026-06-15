#include <stdio.h>
int main()

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
        for (j = i + 1; j < num; j++)
        {
            if (a[i] < a[j])
            {
                int c = a[i];
                a[i] = a[j];
                a[j] = c;
            }
        }
    }

    printf("\n Sorted Array : \n");
    for (i = 0; i < num; i++)
    {
        printf("%d\t", a[i]);
    }
}
