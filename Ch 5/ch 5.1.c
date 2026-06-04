#include<stdio.h>
main()
{  
	int a, b;
	
	printf("Enter no of A : ");
	scanf("%d", &a);
	
	printf("Enter no of B : ");
	scanf("%d", &b);
	
	printf("\n\nBefore Swapping\n");
	printf("A : %d\n",a);
	printf("B : %d\n", b);
	
	a = a + b;
	b = a - b;
	a = a - b;
 
 	printf("\n\nAfter Swapping\n");
	printf("A : %d\n",a);
	printf("B : %d\n", b);
}
