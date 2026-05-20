#include<stdio.h>
main()
{ 

  int b,c;
  
  printf("Enter the first number : ");
  scanf("%d" , &b);
  
  printf("Enter the second number : ");
  scanf("%d" , &c);
  
  while( c >= b) 
  
{  b++;
    
    
      if  (b%4==0)
    {
    	 printf("%d\t" , b );
	}
	
}
  
}

