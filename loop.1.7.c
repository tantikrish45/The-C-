#include<stdio.h>
 int main()
{
	int a,rem;
	int rv=0;
	
    printf("Enter Value of st : ");
	scanf("%d" , &a);
	
	do
	{
		 rem=a%10;
		 rv=rv*10+rem;
		 a= a/10;
		 
	}while(a!=0);
	printf("%d" , rv);
}