#include<stdio.h>
int main()
{
    int a,b,sum;
    printf("Enter Two Number \n");
    scanf("%d %d",&a,&b);
    sum =a+b;
    printf("The Sum Of Two Numbers %d and %d is %d",a,b,sum);
    sizeof(sum);
    printf("\n The Size of the sum is \t %d ", sizeof(sum));


    return 0;
}