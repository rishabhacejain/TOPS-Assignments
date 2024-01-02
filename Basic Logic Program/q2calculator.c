// Q2. Write a program to make Simple calculator (to make addition, subtraction, multiplication, division and modulo)

#include<stdio.h>
int main(){
    float num1,num2,result=0;                      // float type variable for input of two numbers(operands) and result.
    char op;                                      // Character type Variable For Input of Operator.
    printf("Enter A Operator \n");               // Asking For The Input Of Operator.
    scanf("%c",&op);
    printf("Enter two operands \n");             //Asking For the Input of Two Operands on which the operation will be performed.
    scanf("%f""%f", &num1,&num2);

    switch(op){                                 //Using Switch case We Are Programming Our Simple Calculator Program.

        case '+':result =num1+num2;             //For Addition + case
        break;
        case '-':result =num1-num2;             //For Substraction - case
        break;
        case '*':result =num1*num2;             //For Multiplication * case
        break;
        case '/':result =num1/num2;            //For Division / case
        break;
        default:printf("Inavlid Operator");    // For Invalid Input Default Case
    }   
    printf("the value of =%f",result);         // Displaying The Final Result 
    return 0;
    }