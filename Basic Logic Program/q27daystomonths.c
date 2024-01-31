//.Convert days into months
#include<stdio.h>
int main()
{
    float days,months;
    printf("Enter The Number Of Days \n");
    scanf("%f",&days);
   
    months = days/30.42;

    printf("The %.0f days makes a total of %.2f Months",days,months);


    return 0;
}