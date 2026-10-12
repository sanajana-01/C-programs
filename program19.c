

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


bool CheckEven(int iNo1)
{
    if(iNo1 % 2 == 0)
    {
        return true;
    }
    else 
    {
        return false;
    }
}

int main()
{
    int ivalue = 0;
    bool bret = false; 

    printf("Enter number : \n");
    scanf("%d",&ivalue);

    bret = CheckEven(ivalue);
    
    if (bret == true)
    {
        printf("It is even");
    }
    else
    {
        printf("It is odd");
    }
    return EXIT_SUCCESS;
}