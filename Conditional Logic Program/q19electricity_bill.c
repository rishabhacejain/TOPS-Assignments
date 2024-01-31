/* Write a program in C to calculate and print the electricity bill of a given customer. 
The customer ID, name, and unit consumed by the user should be captured from the keyboard 
to display the total amount to be paid to the customer. The charge are as follow :
 */

#include<stdio.h>
#include<conio.h>
int main()
{
    int cust_id;
    char name[50];
    float unit,bill,surcharge,total_bill;

    printf("Enter The Customer Id \n");
    scanf("%d",&cust_id);
    printf("Enter The name \n");
    scanf("%s",&name[50]);
    printf("Enter The Unit Consumed \n");
    scanf("%f",&unit);
    
    if (unit<350)
    {
        bill=unit*1.20;
        printf("Your Bill Amount is %.2f",bill);
    }
    
    else if (unit>=350 && unit<600)
    {
        bill=(unit*1.50);
        printf("Your Bill Amount is %.2f",bill);
    }
    else if (unit>=600 && unit<800)
    {   
        bill=(unit*1.80);
        printf("Your Bill Amount is %.2f",bill);
    }
    else
    {
        bill=(unit*2.00);
        printf("Your Bill Amount is %.2f",bill);
    }

   

    if (bill > 800)
    {
        surcharge= bill * 0.18;
        printf(" \nYour Additional Surcharge is %.2f",surcharge);
        total_bill= surcharge + bill;
        printf("\nYour Total Bill Amount is %.2f",total_bill);

    }
     if(total_bill< 256)
    {
        total_bill=256;
    }
    
    return 0;
}