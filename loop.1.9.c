#include<stdio.h>
int main()
{ 
   int a,c,d=1,sum=0;
   
   printf(" Enter your Number : ");
   scanf("%d" , &a);
      
   while(a>0)   //123
   
   {
   	    c=a%10;    //3
   	    sum = sum+c; //3+2+1 
		   d = d*c;     //    
   	    a=a/10; //12
   	   
   }
   if(d==sum)
	    { printf("%d  valied" , d);
    		 }
		 else
		  { printf(" Envalied");
	      	  }
}
    