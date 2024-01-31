// Q7. Accept marks from user and check pass or fail
#include<stdio.h>
int main()
{
    int marks;
    printf("Enter Your Marks Out Of 100 \n");
    scanf("%d",&marks);

    if(marks>100 || marks<0)
    {
        printf("Invalid Marks enterted. Try again");
    }
    
    else if(marks>=28)
    {
        printf("Congratulations You  Passed");
    }

    else 
    {
        printf("Sorry You Failed. Better Luck Next Time");
    }
    

    return 0;

}