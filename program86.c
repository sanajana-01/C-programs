/*
--------------------------------------------
            operation &&
--------------------------------------------
    result1     result2     final result
--------------------------------------------
    TRUE        TRUE            TRUE        \\ Short Circuit evaluation
    TRUE        FALSE           TRUE        \\ Short Circuit evaluation
    FALSE       TRUE            TRUE           
    FALSE       FALSE           FALSE           
*/

#include<stdio.h>
#include<stdlib.h>

void CheckDivisible(int iNo)
{
    // [|] = bitwise operater
    if(((iNo % 5) == 0) || ((iNo % 3) == 0)) //Short Circuit evaluation means if input is 5 then 5%5 == true then it dont check the % 3 second condtion this is called short Circuit.
    {
        printf("%d is Divisible by 3 or 5.",iNo);
    }
    else
    {
        printf("%d is not Divisible by 3 or 5.",iNo);
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