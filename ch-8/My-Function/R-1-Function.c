#include <stdio.h>
#include <string.h>

int input()
{
    int n;
    scanf("%d", &n);

    return n;
}

int arrayOutput(int size, int a[])
{
    int sum = 0;
    printf("\n\n Array Output \n\n");

    for (int i = 0; i < size; i++)
    {
        printf("%d\t", a[i]);
        printf("\n");
        sum += a[i];
    }
    return sum;
}

void arrayInput(int size, int a[])
{

    printf("\n\n Array Input \n\n");

    for (int i = 0; i < size; i++)
    {
        printf("Enter a[%d] : ", i);
        a[i] = input();
    }

    int sum = arrayOutput(size, a);
    printf("Array elements of sum : %d", sum);
}
