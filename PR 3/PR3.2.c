#include<stdio.h>
main()
{      int i,a=0;

     printf("Enter a Number : ");
     scanf("%d" , &i);  
    do
    {
       a++;
       i = i/10;  
      
    }while(i!=0);  
    
    printf(" Total NUB : %d" , a);
}
