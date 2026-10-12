#include <stdio.h>
#include <stdlib.h>

float Avg(int iNo1,int iNo2)
{
    float fAns = 0;
    fAns = ((float)iNo1 + (float)iNo2) / 2;         // Type Casting
    return fAns;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fResult = 0.0f;
    printf("Enter first number : \n");
    scanf("%d",&iValue1);

    printf("Enter second number : \n");
    scanf("%d",&iValue2);

    fResult = Avg (iValue1,iValue2);
    printf("Avrage of two number is : %f ",fResult);
}