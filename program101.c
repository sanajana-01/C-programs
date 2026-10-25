#include<stdio.h>
#include<stdlib.h>


void DisplayFactor(int iNo)
{
    int iCnt = 0;

    printf("Factors of %d are : ",iNo);
    for (iCnt = 1; iCnt < iNo/2; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            printf("%d \n",iCnt);
        }
        
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    DisplayFactor(iValue);
    
    return EXIT_SUCCESS;
}

// time complexity : 0(N/2)

