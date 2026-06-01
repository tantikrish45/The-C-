#include<stdio.h>
main()
{
	int i,j;
	for(i=5; i>=1; i--)
	{
		
		for(j=i; j>=1; j--)	
		{
			if(i%2!=0)
			{
				if(j%2==0)
					
				printf("%c" , j+64);
	
				
				else	printf("%c" , j+96);
				
				}	
			else
			{
				if(j%2==0)
				{
					printf("%c" , j+64);
				}
				else
				{
					printf("%d" , j);
				}
			}
		}
		printf("\n");
	}
}

