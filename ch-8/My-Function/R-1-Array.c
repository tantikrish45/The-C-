#include <stdio.h>
#include "R-1-Function.c"

void main()
{
    int size;
    printf("Enter number of elements : ");
    size = input();

    int a[size];

    arrayInput(size, a);
}