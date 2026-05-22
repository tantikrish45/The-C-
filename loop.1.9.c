#include<stdio.h>
int main()
{
	int a,b,c;
	int sum=0;
	
    printf("Enter Value of Number : ");  
	scanf("%d" , &a);   //153
	b=a;    //154=
	do
	{
		 c=b%10;     // 3
		 sum=sum+c*c*c;   // 0+9+
		 b = b/10;    // 15
    }while (b!=0);
    
     
	     if(a==sum)
	    { printf("%d Armstrong valied" ,a );
    		 }
		 else
		  { printf("Armstrong Envalied");
	      	  }
	    
}