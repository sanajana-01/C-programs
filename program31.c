#include <stdio.h>
#include <stdlib.h>

int main()
{
    char sName[30];
    int iAge = 0;
    float fMarks = 0.0f;                   //29 char + \n - end of array
    printf("Enter your name : \n");
    scanf("%[^'\n']s", sName);             //\n = enter button , ^ = not , [^'\n'] = till we do not press the enter button 
    //Enter remains in input buffer  = so that we need to flush the input buffer before taking the next input.
    //here we dont use & for sName because it is already a pointer to the first element of the array. 
    
    printf("Enter your age : \n");
    scanf(" %d",&iAge);                    // space added before %d is used to flush the input buffer and remove any leftover newline character from the previous input [sName].
    
    printf("Enter your marks : \n");
    scanf("%f",&fMarks);
    
    printf("Welcome %s \n",sName);
    printf("Your age is : %d \n",iAge);
    printf("Your marks are : %f \n",fMarks);
    
    return EXIT_SUCCESS;
}