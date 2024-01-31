// q17
#include<stdio.h>

int main()
{
    float salary,premium_rate=0.06,insurance_premium;
    int family_members;


    printf("Enter Salatry:  ");
    scanf("%f",&salary);
    printf("Enter The number of Family members to look After of Insurer  ");
    scanf("%d",&family_members);


    insurance_premium=((salary* premium_rate)+(0.01*salary*family_members));

    printf("As per this process, life insurance premium must equal 6 %% of the breadwinner's yearly salary and a\n further 1%% for every reliant. \n Therefore The Insurance Premium Based on Salary and %d reliants is %.2f  ",family_members, insurance_premium);
    
    return 0;




}