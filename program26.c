#include <stdio.h>
#include <stdlib.h>

int main()
{
    char sName[30];                 //29 char + \n - end of array
    printf("Enter your name : \n");
    scanf("%[^'\n']s", sName);             //\n = enter button , ^ = not , [^'\n'] = till we do not press the enter button
    printf("Welcome %s \n",sName);

    return EXIT_SUCCESS;
}