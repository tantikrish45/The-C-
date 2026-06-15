#include <stdio.h>
int main()
{
    int num, gum;
    printf(" Enter the elements : ");
    scanf("%d", &num);

    printf(" Enter the elements : ");
    scanf("%d", &gum);

    int a[num],b[gum];

    printf("\n Array Input\n");
    for (int i = 0; i < num; i++)
    {
        printf("Enter a[%d] : ", i);
        scanf("%d", &a[i]);
    }

    int sum = 0;

    printf("\n Array Output\n");
    for (int i = 0; i < num; i++)
    {
        printf("%d\t", a[i]);
        sum += a[i];
    }
    printf("\n");
    printf("Array element sum : %d\n", sum);
    printf("AVG : %.2f", (float)sum / num);
}