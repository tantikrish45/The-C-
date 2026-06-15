#include <stdio.h>
int main()
{
    int num;
    printf(" Enter the elements : ");
    scanf("%d", &num);

    int a[num], b[num];
    int sum[num];

    printf("\n First Array Input\n");
    for (int i = 0; i < num; i++)
    {
        printf("Enter a[%d] : ", i);
        scanf("%d", &a[i]);
    }
    printf("\n Second Array Input\n");
    for (int i = 0; i < num; i++)
    {
        printf("Enter b[%d] : ", i);
        scanf("%d", &b[i]);
    }
    for (int i = 0; i < num; i++)
    {
        sum[i] = a[i] + b[i];
        printf("%d\t", sum[i]);
    }
}