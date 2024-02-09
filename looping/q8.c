// Q8. Write a program to find out the max from given number (E.g., No: -1562 Max number is 6)

#include<stdio.h>
int main()
{
    int number,digit,temp=0,count=0;
    printf("Enter a number\n");
    scanf("%d",&number);
    while(number>0)
    {
    digit=number%10; //2567%10=7
    
    if(digit>temp)
    {
        temp=digit;
        
    }
    number=number/10;
    }

    printf("The Max digit is %d",temp);



}