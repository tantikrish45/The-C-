#include<stdio.h>
main()

 
  {   printf("---------------------------------------------------\n");
	printf("------        Movie Ticket Booking           ------\n");
	printf("---------------------------------------------------\n\n");
	
	
	printf("press 1 for hollwood\n");
    printf("press 2 for Bollwood\n");
    printf("press 3 for Tollwood\n");
  	printf("press 4 for Gujarati\n");
  	
    char choice1;
            printf("\n");
            printf("Enter your choice : ");
            scanf("%c" , &choice1 );
            printf("\n");
      
    switch(choice1)
      
    {
	 
            case '1':
          	
          	printf("------ wellcome To Hollwood ------\n");
          	printf(" press a  For comady\n");
          	printf(" press b  For romentic\n");
          	printf(" press c  For Horoor\n");
          	printf(" press d  For Action\n");
          	
          	
    char choice2;
                 printf("\n");
                 printf("Enter your choice : ");
                 scanf(" %c" , &choice2);
          	     printf("\n");
    switch(choice2)
    
    {
	 
              case'a':
            
               printf("------- wellcome To Comady movie -------\n\n");
               
               printf("press a  For The Hangover\n");
               printf("press b  For superbad\n");
               printf("press c  For Dumb and Dumber\n");
               printf("press d  For White Chicks\n");
        
    char choice3;
    
                 printf("\n");
                 printf("Enter your choice :");
                 scanf(" %c" , &choice3);
                 
    switch(choice3)
    
    
            {
			   
                   case 'a' :
                    	printf("The Hangover Movie Ticket Booked");
                    	break;
                    
                    case 'b' :
                    	printf("Superbad Movie Ticket Booked");
                    break;
                    
                    case 'c' :
                    	printf("Dumb and Dumber Movie Ticket Booked");
                    break;
                    
                    case 'd' :
                    	printf("White Chicks Movie Ticket Booked");
                    	
                    	
                    default:
                    	printf("Thise Number is incurect");
                    	
                    break;
                
            }
                 
			   break;
			   
}
  
}
            
}
    		

