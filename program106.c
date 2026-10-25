#include<stdio.h>
#include<stdlib.h>

bool CheckPerfect(int iNo)
{
    int iCnt = 0,iSum = 0;

    printf("Factors of %d are :\n ",iNo);
    for (iCnt = 1; iCnt <= iNo/2; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return (iSum == iNo);
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    bRet = CheckPerfect(iValue);

    if(bRet == true)
    {
        printf("It is perfect number ");
    }
    else
    {
        printf("It is not a perfect number ");
    }
    
    return EXIT_SUCCESS;
}

// time complexity : 0(N/2)

