#include<stdio.h>
int main()
{ 

  int a=1;
  int b;
  
  printf("Enter the number : ");
  scanf("%d" , &b);
  
  do
{  
    
    
      if  (b%2!=0)
      
    {
    	 printf("print odd number %d\t" , b );
	}
    b--;
	
}while( b >= a);
  
}