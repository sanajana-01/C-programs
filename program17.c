#include<stdio.h>
#include<stdlib.h>

int main()
{

    int ivalue = 0;

    printf("Enter number : \n");
    scanf("%d",&ivalue);

    if(ivalue % 2 == 0)
    {
        printf("it is even number");
    }
    else 
    {
        printf("it is odd number");
    }


    return EXIT_SUCCESS;
}