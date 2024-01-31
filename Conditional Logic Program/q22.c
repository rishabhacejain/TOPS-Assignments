// Q22/33 WAP to input the week number and print week day.
#include<stdio.h>

int main()
{
int week;

printf(" Enter week number(1-7):");
scanf("%d", &week);

if(week == 1){
    printf("The Day is Monday\n");
}
else if(week == 2)
{
    printf("The Day is Tuesday\n");
}
else if(week == 3)
{
    printf("The Day is Wednesday\n");
}
else if(week == 4)
{
    printf("The Day is Thursday\n");
}
else if(week == 5)
{
    printf("The Day is Friday\n");
}
else if(week == 6)
{
    printf("The Day is saturday\n");
}
else if(week == 7)
{
    printf("The Day is Sunday\n");
}
else
{
    printf("invalid number");
}

return 0;


}