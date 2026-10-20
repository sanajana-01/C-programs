/*
--------------------------------------------
            operation &&
--------------------------------------------
    result1     result2     final result
--------------------------------------------
    TRUE        TRUE            TRUE
    TRUE        FALSE           TRUE
    FALSE       TRUE            FALSE           \\Short Circuit
    FALSE       FALSE           FALSE           \\ Short Circuit
*/


#include<stdio.h>
#include<stdlib.h>

void CheckDivisible(int iNo)
{
    if(((iNo % 5) == 0) && ((iNo % 3) == 0)) //Short Circuit evaluation means if input is 4 then 4%5 == false then it dont check the %3 second condtion this is called short Circuit.
    {
        printf("%d is Divisible by 3 and 5 both.",iNo);
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