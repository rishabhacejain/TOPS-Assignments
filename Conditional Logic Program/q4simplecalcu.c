// Q4. WAP to make simple calculator (operation include Addition, Subtraction, Multiplication, Division, modulo) using conditional statement
#include<stdio.h>
int main()
{
    int a,b,result;
    char op;
    printf("Enter the operator\n");
    scanf("%c",&op);
    printf("Enter The Two Numbers \n");
    scanf("%d""%d",&a,&b);
   

    switch(op)
    {
        case ('+'):
        result=a+b;
        printf("The Sum Of %d and %d is %d",a,b,result);
        break;

        case ('-'):
        result=a-b;
        printf("The Sum Of %d and %d is %d",a,b,result);
        break;

        case ('*'):
        result=a*b;
        printf("The Sum Of %d and %d is %d",a,b,result);
        break;

        case ('/'):
        result=a/b;
        printf("The Sum Of %d and %d is %d",a,b,result);
        break;

        case ('%'):
        result=a%b;
        printf("The Sum Of %d and %d is %d",a,b,result);
        break;

        default :
        printf("Enter a Valid Choice");
        break;
    }

    return 0;
}