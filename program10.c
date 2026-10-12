#include<stdio.h>
#include<stdlib.h>
int main ()
{

    int iret = 0;
    int ino1 = 0;
    int ino2 = 0;
    int ino3 = 0;

    printf("Enter number : \n");
    iret = scanf("%d %d %d",&ino1,&ino2,&ino3);  //& = address of variabel

    printf("Return value is : %d \n",iret);
    return EXIT_SUCCESS;
}
