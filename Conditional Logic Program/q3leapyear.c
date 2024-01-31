// Q3. WAP to check if the given year is a leap year or not.
#include<stdio.h>
int main()
{
    int year;
    printf("Enter a year To Check for leap year or No leap Year in YYYY format \n");
    scanf("%d",&year);
    if(year%400==0)
    {
        printf("The Year Is leap Year");
    }
    else if(year%100==0)
    {
        printf("The Year Is not a leap Year");
    }
    else if(year%4==0)
    {
        printf("The Year Is leap Year");
    }
    else
    {
        printf("The Year Is not a leap Year");
    }
    return 0;
    }
        