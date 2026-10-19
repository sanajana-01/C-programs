#include<stdio.h>
#include<stdlib.h>


void CheckDivisible(int iNo)
{
    if(iNo % 3 == 0)
    {
        printf("%d is Divisible by 3.",iNo);
    }
    else
    {
        printf("%d is not Divisible by 3.",iNo);
    }
} 

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);
    CheckDivisible(iValue);

    return EXIT_SUCCESS;
}