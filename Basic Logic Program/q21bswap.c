#include<stdio.h>
int main()
{
    int a, b;
    printf("Enter the Two Numbers A and B\n");
    scanf("%d""%d",&a,&b);
    printf("The Value Of A and B Before Swapping are %d and %d respectively \n",a,b);

    a=a+b;
    b=a-b;
    a=a-b;

    printf("The Value of A and B after swapping are %d and %d respectively",a,b);


return 0;
}