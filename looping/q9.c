// Q9. Write a program make a summation of given number (E.g., 1523 Ans: 11)
#include<stdio.h>

int main(){

int num, sum=0;

printf("Enter a Number :");
scanf("%d",  &num);

while(num != 0){

    sum += num % 10;
    num = num / 10;

}
   
   printf("Summation of Given number is: %d\n", sum);


    return 0;
}