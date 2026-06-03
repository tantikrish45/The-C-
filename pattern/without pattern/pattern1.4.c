#include<stdio.h>
main()
{         int i,j;
	      for(i=1; i<=5; i++)
	{
		for(j=i; j<=5; j++)
		{
			if(i%2==0)
			{
				if(j%2!=0)
				{ printf(" %c" , j+64);
				}
				else
				{ printf(" %c" ,j+64);
				}
			}
			else
			{
			    printf(" %d" , j);
			}
		}
		
		printf("\n");
	}
	 
	
}
