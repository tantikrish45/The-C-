#include<stdio.h>
main()
{
    int a=1;
    
    apple:
    	
     if(a<=10)
    {
	  printf("%d Aapka Saval Modiji se\n" , a);
	  a++;
	  
	 } 
    
    goto apple;
}

