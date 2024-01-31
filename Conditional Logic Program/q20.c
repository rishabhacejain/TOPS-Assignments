// Q 20/31. Write a program in C to read any Month Number in integer and display the number of days for this month.
#include<stdio.h>
int main()
{
    int Month,days;

    printf("Enter The Month In number(1-12)");
    scanf("%d",&Month);
    if(Month==1 || Month==3 || Month==5||Month==7||Month==9||Month==11)
    {
        printf("The Month Have 31 Days");
    }
    else if(Month==4||Month==6||Month==8||Month==10||Month==12)
    {
        printf("The Month Have 30 days");
    }
    else if (Month == 2)
    {
        printf("The Month Has 28 or 29 days");
    }
    else
    {
        printf("Invalid Month");
    }
    
    return 0;
}