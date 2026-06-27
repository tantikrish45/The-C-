#include<stdio.h>

void add(int a, int b)
{
    printf("Addition of %d and %d is %d\n", a, b, a + b);
}

void sub(int a, int b)
{
    printf("Subtraction of %d and %d is %d\n", a, b, a - b);
}

void mul(int a, int b)
{
    printf("Multiplication of %d and %d is %d\n", a, b, a * b);
}

void divi(int a, int b)
{
    if (b == 0)
        printf("Division by zero is not possible.\n");
    else
        printf("Division of %d and %d is %d\n", a, b, a / b);
}

void mod(int a, int b)
{
    if (b == 0)
        printf("Modulo by zero is not possible.\n");
    else
        printf("Modulo of %d and %d is %d\n", a, b, a % b);
}