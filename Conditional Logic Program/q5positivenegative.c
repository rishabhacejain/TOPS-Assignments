// Q5. Check Number Is Positive or Negative
#include<stdio.h>
int main()
{
    int num;
    printf("Enter an Integer to check negative or positive\n");
    scanf("%d",&num);

    if(num>0)
    {
        printf("The Number is Postive");
    }

    else if (num<0)
    {
        printf("The Number is negative");
    }
    else if(num==0)
    {
        printf("The Number is Zero");
    }
    else
    {
        printf("The Number entered is not a valid integer value.");
    }

    return 0;
}