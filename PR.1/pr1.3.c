#include<stdio.h>
main()

{
	float A,B;
	int C = 180;
	
	printf("Enter the fist angle : ");
	scanf("%f" , &A);
    printf("\n");
    printf("Enter the second angle :");
    scanf("%f" , &B);
    printf("\n");
    
    int X, P;
    
    X= ( C - (A+B) );
    printf("%d" , X );
}
