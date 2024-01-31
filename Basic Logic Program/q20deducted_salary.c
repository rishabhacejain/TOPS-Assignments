/* 20. Accept monthly salary from the user 
and deduct 10% insurance premium, 10% loan installment find out of remaining salary. */
#include<stdio.h>
int main()
{
    int Monthly_salary,remaining_salary;
    double insurance_premium;
    double loan_installment;
    printf("Enter Your monthly Salary \n");
    scanf("%d",&Monthly_salary);
    insurance_premium=(10*Monthly_salary)/100;
    remaining_salary=Monthly_salary-insurance_premium;
    loan_installment=(10*remaining_salary)/100;
    remaining_salary=remaining_salary-loan_installment;
    printf("The Remaining salary is %d ",remaining_salary);

    return 0;

}
