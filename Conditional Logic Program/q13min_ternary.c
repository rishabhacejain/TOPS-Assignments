// Q13.WAP to find minimum number among 3 numbers using ternary operator
#include<stdio.h>
int main()
{
    int num1,num2,num3,temp,min;
    printf("Enter The Three numbers \n");
    scanf("%d""%d""%d",&num1,&num2,&num3);

    temp =(num1<num2)?num1:num2;
    min =(temp<num3)?temp:num3;

    printf("The Smallest Number among %d, %d and %d is %d",num1,num2,num3,min);


    return 0;
}