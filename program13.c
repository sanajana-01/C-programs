#include <stdio.h>
#include<stdlib.h>
//////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Addition
//  Input         : Integer, Integer
//  Output        : Integer
//  Description   : Performs addition
//  Date          : 04/10/2026
//  Author        : Sanjana Sanjay Relekar
//  
//////////////////////////////////////////////////////////////////////////////

int addition(
                int iNo1,                       // First input
                int iNo2                        // Second input
            )
{
    int iAns = 0;

    iAns = iNo1 + iNo2;                         //Business Logic
    return iAns;
}

//////////////////////////////////////////////////////////////////////////////
//
//  Entry point of the Application
//
//////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1, iValue2, iResult = 0;
    printf("Enter first number : \n");
    if(scanf("%d",&iValue1) != 1)
    {
        fprintf(stderr,"Unable to proceed as input is invalid \n");
    
        return EXIT_FAILURE;
    
    }
    printf("Enter second number : \n");
    if(scanf("%d",&iValue2) != 1)
    {
        fprintf(stderr,"Unable to proceed as input is invalid \n");
    
        return EXIT_FAILURE;
    
    }
    iResult = addition(iValue1,iValue2);   
    
    printf("Addition is : %d \n",iResult);
    
    return EXIT_SUCCESS;                        //indicates a succsess
}

//////////////////////////////////////////////////////////////////////////////
//
//  Step 5 : Test the Program
//
//  Tested test cases
//---------------------------------------------------------------------------
//     Input 1            Input 2           Output
//---------------------------------------------------------------------------
//        10                11                 21
//        11                 0                 11
//         0                11                 11
//        20                -9                 11
//        -9                20                 11
//       -20               -21                 41
//
//////////////////////////////////////////////////////////////////////////////


 