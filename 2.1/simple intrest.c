#include <stdio.h>
main()
{
    float a,r,t;
    
    printf("Enter amount : ");
    scanf("%f",&a);
    printf("Enter rate : ");
    scanf("%f",&r);
    printf("Enter time : ");
    scanf("%f",&t);
	
    printf("simple intrest : %0.2f",a*r*t/100);
}
