#include<stdio.h>
#include<stdlib.h>

void CheckDivisible(int iNo)
{
    // without using the && operator
    if(((iNo % 5) == 0))
    {
        printf("divisible by 5 only");
        if((iNo % 3) == 0)
        {
            printf("%d is Divisible by 3 and 5 both.",iNo);
        }
    } 
    else
    {
        printf("%d is not Divisible by 3 and 5 both.",iNo);
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