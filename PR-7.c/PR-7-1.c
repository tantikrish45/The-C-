#include <stdio.h>
#include"Function.c"


int main()
{
    int choice, a, b;

    for (;;)
    {
        printf("\nPress 1 for +\n");
        printf("Press 2 for -\n");
        printf("Press 3 for *\n");
        printf("Press 4 for /\n");
        printf("Press 5 for %%\n");
        printf("Press 0 for Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 0)
            break;

        printf("Enter first number: ");
        scanf("%d", &a);

        printf("Enter second number: ");
        scanf("%d", &b);

        switch (choice)
        {
        case 1:
            add(a, b);
            break;
        case 2:
            sub(a, b);
            break;
        case 3:
            mul(a, b);
            break;
        case 4:
            divi(a, b);
            break;
        case 5:
            mod(a, b);
            break;
        default:
            printf("Invalid Choice!\n");
        }
    }
}