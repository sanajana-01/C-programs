#include<stdio.h>
#include<stdlib.h>


unsigned long long Factorial(int iNo)
{
    int iCnt = 0;
    unsigned long long iFact = 0;

    for (iCnt = 1, iFact = 1; iCnt <= iNo; iCnt++)
    {
        iFact = iFact * iCnt;
    }
    return iFact;
}

int main()
{
    int iValue = 0;
    unsigned long long lResult = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    lResult = Factorial(iValue);
    printf("Factorial is : %lld \n",lResult);
    
    return EXIT_SUCCESS;
}