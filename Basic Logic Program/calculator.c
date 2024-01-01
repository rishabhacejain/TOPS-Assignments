#include<stdio.h>
int main(){
    float num1,num2,result=0;
    char op;
    printf("Enter A Operator \n");
    scanf("%c",&op);
    printf("Enter two operands \n");
    scanf("%f""%f", &num1,&num2);

    switch(op){

        case '+':result =num1+num2;
        break;
        case '-':result =num1-num2;
        break;
        case '*':result =num1*num2;
        break;
        case '/':result =num1/num2;
        break;
        default:printf("Inavlid Operator");
    }   
    printf("the value of =%f",result);
    return 0;
    }