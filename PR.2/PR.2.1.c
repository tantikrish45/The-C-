#include<stdio.h>
main()

{   int A;
    char gop;
    
    
     printf("Enter your Marks : ");
     scanf("%d" , &A);
    
    gop = ( A <= 100 && A >=81)  ?    'A' :
          ( A <= 80 && A >=61)   ?    'B' :
          ( A <= 60 && A >=41)   ?    'C' :
          ( A <= 40 && A >=34)   ?    'D' : 
          ( A <= 33 && A >=0)    ?    'F' : 'fail' ;
     printf("Your Grade is %c\n" , gop);
     
     switch(gop)
     { 
        case'A' :
        printf("Excellent work!");
        break;
        
        case'B' :
        printf("Well Done");
        break;
        
        case'C' :
        printf("Good job");
        break;
        
        case'D' :
        printf("Your passed , but you could do better");
        break;
        
        case'F' :
        printf("SORRY, YOU FAILED");
        break;
        
        default :
        	printf("invalid input");
        break;	
    }
    
        if (gop != 'F')
        { 
          printf("\n\n you are eligible for the next level..");
          
		}
        else 
        { 
           printf("\n\nplease try again next time...");
		}
	 
}
