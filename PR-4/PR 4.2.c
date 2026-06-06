#include<stdio.h>
main()
{    
      int n=1,j,i;
      
	      for(i=1; i<=4; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf(" %d" , n+10);
			n++;
		}
		
		printf("\n");
	}
}
