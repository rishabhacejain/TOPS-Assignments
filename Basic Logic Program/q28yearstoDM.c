#include<stdio.h>
int main()
{
    int years,months,days;
    printf("Enter the Number of Years You Wish To Convert into months anad days\n");
    scanf("%d",&years);

    months = years*12;
    days = years*365;
    printf("The Number Days in %d years is %d and Number Of Months In %d years is %d ",years,days,years,months);

    return 0;

}