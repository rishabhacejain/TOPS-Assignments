// Calculate person’s Annual salary
#include<stdio.h>
int main()
{
    int Monthly_salary;
    int Annual_salary;

    printf("Enter Your Monthly Salary\n");
    scanf("%d",&Monthly_salary);
    Annual_salary=Monthly_salary*12;
    printf("Your Annual Salary Is %d ",Annual_salary);

    return 0;
}