#include<stdio.h>
main()
{
	 int a , i;
	 int c=0,d=1;
	 printf("Enter a number : " );
	 scanf("%d" , &a);
	 
	 for( i=1; i<=a; i++)
	 { 
	   printf("%d\t" , c);
	   int  x=c+d;   
	   c=d;
	   d=x;
	   
	   
	 }
}
