/* 
    Step 1 : Understand the problem statement
    Step 2 : Write the Algorithm
    Step 3 : Decide the programing language
    Step 4 : Write the program
    Step 5 : Test the program

*/

//////////////////////////////////////////////////////////////////////////////
//
//  Step 1 : Understand the Problem statement
//           User is going to enter any 2 integers
//           And we have to perform addition
//////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////
//
//  Step 2 : Write the Algorithm
/* 
    Accept first number as No1
    Accept first number as No2
    create the variable as Ans to store the result
    Perform the addition and store it into Ans
    Display the result from Ans

*/
//
//////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////
//
//  Step 3 : Decide the programing language
//  We select the C programing    
//////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////
//
//  Step 4 : Write the program
//
//////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int addition(int iNo1,int iNo2)
{
    int iAns = 0;

    iAns = iNo1 + iNo2;              //Business Logic
    return iAns;
}

int main()
{
    int iValue1, iValue2, iResult = 0;
    printf("Enter first number : \n");
    scanf("%d",&iValue1);            //& = address of variabel

    printf("Enter second number : \n");
    scanf("%d",&iValue2);            //& = address of variabel

    iResult = addition(iValue1,iValue2);   
    
    printf("Addition is : %d \n",iResult);
    
    return 0;                             //indicates a succsess
}
