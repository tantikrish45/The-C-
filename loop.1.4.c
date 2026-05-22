#include<stdio.h>
int main()
{ 

  int a=1;
  int b;
  
  printf("Enter the number : ");
  scanf("%d" , &b);
   // 14
  do
  {  
      
    printf("%d\n" , a);
    a++;
  }while( a<= b);
}
    