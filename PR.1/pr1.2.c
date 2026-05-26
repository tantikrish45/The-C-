#include<stdio.h>
main()
 
 { 
    float  A, HRA, DA ,TA;
    
    printf("calculates The gross salary\n\n");
    printf("\n");
    printf("Enter The gross salary :");
    scanf("%f" , &A);
    printf("\n");
    printf("Enter the gross salary HRA : ");
    scanf("%f" , &HRA);
        
    printf("\n");  
    printf("Enter the gross salary DA : ");
    scanf("%f" , &DA);
    
    printf("\n");  
    printf("Enter the gross salary TA : ");
    scanf("%f" , &TA);
    
    int x;
    
    x = A + (HRA*A/100) + (DA*A/100)+ (TA*A/100);
    
    printf("%d", x );
}
