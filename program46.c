#include <stdio.h>
#include <stdlib.h>

float Avg(int iNo1,int iNo2,int iNo3)
{
    float fAns = 0;
    fAns = ((float)iNo1 + (float)iNo2 + (float)iNo3) / 3;         // Type Casting
    return fAns;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;
    float fResult = 0.0f;
    printf("Enter first number : \n");
    scanf("%d",&iValue1);

    printf("Enter second number : \n");
    scanf("%d",&iValue2);

    printf("Enter third number : \n");
    scanf("%d",&iValue3);

    fResult = Avg (iValue1,iValue2,iValue3);
    printf("Avrage of three number is : %f ",fResult);
}