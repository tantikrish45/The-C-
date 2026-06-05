#include<stdio.h>
main()
{     int i,a,b,sum=0;
 		printf(" Enter any number : ");
 		scanf("%d" , &i);
 		
 		 b=i;
    do
    {
      a=i%10;
      sum = sum+a;
      i = i/100;
      
    }while(i!=0);
    
    printf("sum : %d" , sum);
}
