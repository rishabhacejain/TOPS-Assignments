// Q6. WAP to print Fibonacci series up to given numbers
#include<stdio.h>

int main()
{

    int i, n ;
    int a = 0 ,b = 1;
    int nextnum = a + b;
    printf("Enter a number that many time Fibonacci series should run:");
    scanf("%d", &n);
    printf("%d, %d, ",a,b);

    for(i=3;i<=n;i++)
    {
        printf("%d, ", nextnum);
        a = b;
        b = nextnum;
        nextnum = a + b;
    }

    return 0;
}