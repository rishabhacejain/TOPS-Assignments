// Q.10 WAP to check whether a number is negative, positive or zero.
#include<stdio.h>
int main(){

    int num;

    printf(" Enter the number : ");
    scanf("%d", &num);


    if(num > 0)
    {
        printf("Number %d is positive \n",num);
    } 
    else if( num < 0)
    {
        printf("Number %d  is negative \n",num);
    } 
    else
    {
        printf("Number entered is zero  \n",num);
    }
      return 0;
}