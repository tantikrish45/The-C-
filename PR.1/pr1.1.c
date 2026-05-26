#include<stdio.h>
main()

{   float f;
    float c;
    printf(" The temperature in clsius : ");
    scanf("%f", &c);
    
    f = (9*c)/5 + 32;
    printf(" The temperature in Fahrenheit  : %f  " , f);
}
