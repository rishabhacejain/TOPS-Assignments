// Q5. WAP to print factorial of given number
#include<stdio.h>

int main()
{

    int i, n, fact=1;// factorial
    printf("Enter a Number: ");
    scanf("%d", &n);

if(n<0)
{
    printf("Factorial Of Negative number does not exists");
}
else
{
    for(i=1;i<=n;i++)
    {
       fact = fact * i;
    }
    printf("The Factorial of %d is %d.\n",n ,fact);
}

    return 0;
}