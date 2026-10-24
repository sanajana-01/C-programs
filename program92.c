#include<stdio.h>
#include<stdlib.h>


int Factorial(int iNo)
{
    int iCnt = 0, iFact = 0;

    for (iCnt = 1, iFact = 1; iCnt <= iNo; iCnt++)  // good programmer
    {
        iFact = iFact * iCnt;
    }
    return iFact;
}

int main()
{
    int iValue = 0, iResult = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iResult = Factorial(iValue);
    printf("Factorial is : %d \n",iResult);
    
    return EXIT_SUCCESS;
}