#include <stdio.h>
#include<stdio.h>

void main()
{
    char str[100];
    int i, len = 0, op = 1;

    printf("Enter any string: ");
    scanf("%s", str);

    while (str[len] != '\0')
    {
        len++;
    }

    for (i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - i - 1])
        {
            op = 0;
            break;
        }
    }

    if (op)
        printf("The given string is a Palindrome.");
    else
        printf("The given string is not a Palindrome.");

    
}