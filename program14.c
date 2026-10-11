#include "header.h" 
// Main
//////////////////////////////////////////////////////////////////////////////
//
//  Entry point of the Application
//
//////////////////////////////////////////////////////////////////////////////

int main ()
{
    int iValue1, iValue2, iResult = 0;
    printf("Enter first number : \n");
    if(scanf("%d",&iValue1) != 1)
    {
        fprintf(stderr,"Unable to proceed as input is invalid \n");
    
        return EXIT_FAILURE;
    
    }
    printf("Enter first number : \n");
    if(scanf("%d",&iValue2) != 1)
    {
        fprintf(stderr,"Unable to proceed as input is invalid \n");
    
        return EXIT_FAILURE;
    
    }
    iResult = addition(iValue1,iValue2);   
    
    printf("Addition is : %d \n",iResult);
    
    return EXIT_SUCCESS;                        //indicates a succsess
}



 