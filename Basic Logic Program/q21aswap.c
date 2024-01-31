#include<stdio.h>
int main()
{
    int a, b, temp;
    printf("Enter the Two Numbers A and B\n");
    scanf("%d""%d",&a,&b);
    printf("The Value Of A and B Before Swapping are %d and %d respectively \n",a,b);

    temp = a;
    a = b;
    b = temp;

    printf("The Value of A and B after swapping are %d and %d respectively",a,b);

return 0;
}