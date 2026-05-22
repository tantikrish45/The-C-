#include<stdio.h>
int main()
{ 

  int b,c;
  
  printf("Enter the first number : ");
  scanf("%d" , &b);
  
  printf("Enter the second number : ");
  scanf("%d" , &c);
  
  
  do
{  
    
    
      if  (b%4==0)
    {
    	 printf("%d\t" , b );
	}
	b++;
}while( c >= b);
  
}