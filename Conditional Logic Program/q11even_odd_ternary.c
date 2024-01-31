// Q11. WAP to find number is even or odd using ternary operator
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a Number\n");
    scanf("%d",&num);
    if(num==0)
    {
        printf("The Number is Zero ");
    }
    else
    {
    (num%2==0)? printf("The Number is Even"):printf("The Number is Odd");
    }
    return 0;
}