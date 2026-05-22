#include<stdio.h>
int main()
{
	int a,b,rem;
	int rv=0;
	
    printf("Enter Value of Number : ");  
	scanf("%d" , &b);
	a=b;
	do
	{
		 rem=b%10;     
		 rv=rv*10+rem;   
		 b = b/10;    
    }while(b>0);
        printf("%d\n" , rv);
	     if(a==rv)
	    {
		   
	        printf("valied" );
     	}
		 else
		  
		{
		     printf("Envalied");
	    } 
	    
}