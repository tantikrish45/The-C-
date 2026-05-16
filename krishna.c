#include<stdio.h>
main()

{   printf("---------------------------------------------------\n");
	printf("------        Movie Ticket Booking           ------\n");
	printf("---------------------------------------------------\n\n");
	
	
	printf("press 1 for hollwood\n");
    printf("press 2 for Bollwood\n");
    printf("press 3 for Tollwood\n");
  	printf("press 4 for Gujarati\n");
  	
        char choice;
           printf("\n");
           printf("Enter your choice : ");
           scanf("%c" , &choice );
      
      
      switch(choice)
      
       { 
         
          case '1':
          	printf("------ wellcome To Hollwood ------\n");
          	printf(" press A  For comady\n");
          	printf(" press B  For romentic\n");
          	printf(" press c  For Horoor\n");
          	printf(" press c  For Action\n");
          	
          	
          	char op;
                 printf("\n");
                 printf("Enter your choice : ");
                  printf("\n");
                 scanf("%c" , &op );
          	     printf("\n");
         
           switch(op)
           {  
              case'1':
               printf("------- wellcome To Comady movie -------");
               
               printf("press A  For The Hangover ");
               printf("press B  For superbad ");
               printf("press C  For Dumb and Dumber ");
               printf("press D  For White Chicks");
               printf("\n\n");
               
               char vp;
                 printf("\n");
                 printf("Enter your choice : ");
                 scanf("%c" , &vp );
                 
            switch(vp)
               {  
                   case 'a' :
                    	printf("your Ticket Booked");
                    	break;
                    
                    case 'b' :
                    	printf("your Ticket Booked");
                    break;
                    
                    case 'c' :
                    	printf("your Ticket Booked");
                    break;
                    default:
                    	printf("This Ticket Booked");
                        
              }
                 
			   break;
                 
		   }
            
	   }
    		
}


