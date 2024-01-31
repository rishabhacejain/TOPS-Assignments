#include<stdio.h>
int main()
{
    float minutes,seconds;
    float hours;
    printf("Enter The Time In Minutes You wish to convert into seconds and hours \n");
    scanf("%f", &minutes);

    seconds = minutes*60;
    hours = minutes/60;

    printf("%.0f Minutes is %.2f seconds and %.0f Minutes is %.2f Hours",minutes,seconds,minutes,hours);

    return 0;

}