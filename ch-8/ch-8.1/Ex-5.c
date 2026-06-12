#include <stdio.h>

int main()
{

    int size1, size2;
    printf(" Enter size 1 : ");
    scanf("%d", &size1);
    printf(" Enter size 2 : ");
    scanf("%d", &size2);

    int a[size1];
    int b[size2];
    int marge[size1 + size2];

    printf("\n\n First Array Input\n\n");
    for (int i = 0; i < size1; i++)
    {
        printf(" Enter a[%d] : ", i);
        scanf("%d", &a[i]);
    }
    printf("\n\n second Array Input\n\n");
    for (int i = 0; i < size2; i++)
    {
        printf(" Enter b[%d] : ", i);
        scanf("%d", &b[i]);
    }

    for (int i = 0; i < size1; i++)
        marge[i] = a[i];

    for (int i = 0; i < size2; i++)
        marge[i + size1] = b[i];

    printf("\n\n Marge Array \n\n");

    for (int i = 0; i < size1 + size2; i++)
    {
        printf("%d\t", marge[i]);
    }
}