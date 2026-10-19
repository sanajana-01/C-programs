//Input 4
//output 10

#include <stdio.h>
#include<stdlib.h>

int Summation(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)// iCnt = 4 ,4 <= 4
    {
        iSum = iSum + iCnt;//iSum = 10
    }
    return iSum;
}

int main()
{

    int iValue = 0;
    int iRet = 0;

    printf("Enter the frequency : \n");
    scanf("%d",&iValue);

    iRet = Summation(iValue);
    printf("Summation is : %d \n",iRet);

    return EXIT_SUCCESS;
}