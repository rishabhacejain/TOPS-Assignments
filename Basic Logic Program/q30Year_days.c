#include<stdio.h>
int main()
{
    float years, days;
    printf("Enter The Number Of Years You wish to convert into days \n");
    scanf("%f",&years);
    days = years * 365;
    printf("The Number Of Days in %.0f years is %0.2f days",years,days);

    printf("\nEnter The Number Of days You wish to convert into years \n");
    scanf("%f",&days);
    years = days/365;
    printf("The Number Of Years in %.0f days is %.2f years",days,years);

}