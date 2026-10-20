#include<stdio.h>
#include<stdlib.h>


void CheckDivisible(int iNo)
{
    if(iNo % 5 == 0)
    {
        printf("%d is Divisible by 5.",iNo);
    }
    else
    {
        printf("%d is not Divisible by 5.",iNo);
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