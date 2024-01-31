//Q12.WAP to find maximum number among 3 numbers using ternary operator
#include<stdio.h>
int main()
{
    int num1,num2,num3,temp,max;
    printf("Enter Three Numbers \n");
    scanf("%d""%d""%d",&num1,&num2,&num3);

    temp = (num1>num2)?num1:num2;
    max = (temp>num3)?temp:num3;

    printf("The Largest number among %d %d and %d is %d",num1,num2,num3,max);

    return 0;
}