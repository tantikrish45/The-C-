#include<stdio.h>
main()
{
	int a,rem;
	int rv=0;
	
    printf("Enter Value of st : ");
	scanf("%d" , &a);
	
	while(a!=0)
	{
		 rem=a%10;
		 rv=rv*10+rem;
		 a= a/10;
		 
	}
	printf("%d" , rv);
}
