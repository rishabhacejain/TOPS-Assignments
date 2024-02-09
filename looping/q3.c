/* Q3. WAP to take 10 no. Input from user find out below values
a. How many Even numbers are there
b. How many odd numbers are there
c. Sum of even numbers
d. Sum of odd numbers
 */

#include<stdio.h>
int main()
{
    int num[10],even=0,odd=0,even_sum=0,odd_sum=0;

    printf("Enter 10 numbers\n");
    for(int i=0;i<=9;i++)
    {
    scanf("%d",&num[i]);
    if(num[i]%2==0)
    {
        even++;
        even_sum+= num[i];
    }
    else
    {
        odd++;
        odd_sum+= num[i];
    }
    
    }
    printf("How many Even numbers are there?\n");
    printf("Total even numbers are:%d\n", even);
    printf("How many Odd numbers are there?\n");
    printf("Total odd numbers are :%d\n", odd);
    printf("sum of even number:%d\n",even_sum);
    printf("sum of odd number:%d\n", odd_sum);
    return 0;
    
}

