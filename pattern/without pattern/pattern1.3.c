#include<stdio.h>
main()
{
	int i,j;
	
	for(i=1; i<=5; i++)
	{
		for(j=5 ; j>=i; j--)
		{
		
		
		if(i%2==0)
		{
			if(j%2!=0)	
			{
				printf(" %c" , j+96);
			}
			else
			{
				printf(" %c" , j+96);
			}
		}
		else
		{
	        	if(j%2==0)
	        	{
				printf(" %c" , j+96);
	        }
	        	else
	        	{
				printf(" %d" , j*j);
	       	}
	 		}
}
	printf("\n");
}
}
