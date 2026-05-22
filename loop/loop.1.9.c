#include<stdio.h>
main()
{ 
   int a,c,d=1,sum=0;
   
   printf(" Enter your Number : ");
   scanf("%d" , &a);
      
   while(a>0)   
   
   {
   	    c=a%10;    
   	    sum = sum+c; 
		d = d*c;        
   	    a=a/10; 
   	   
   }
   if(d==sum)
	    { printf("%d  valied" , d);
    		 }
		 else
		  { printf(" Envalied");
	      	  }
} 

