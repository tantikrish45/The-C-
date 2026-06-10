#include <stdio.h>
int main()
{
    int num;
    printf(" Enter the elements : ");
    scanf("%d" , &num);

    int a[num];
    printf("\n Array Input\n");
    for (int i = 0; i < num; i++)
    {
        printf("Enter a[%d] : " , i);
        scanf("%d" , &a[i]);
    }
    printf("\n\n  Array Output\n\n");

    for (int i = 0; i < num; i++)
    {
        printf("%d\t" , a[i]);
    }
}