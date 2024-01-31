// Q14. Find the largest of three numbers.

#include<stdio.h>
int main()
{

int num1, num2, num3;

printf("Enter Three numbers: \n");
scanf("%d %d %d" , &num1, &num2, &num3);

if( num1 >= num2 && num1 >= num3)
 {
    printf("%d is  the largest number among %d,%d,%d. \n", num1,num1,num2,num3);
 }
 
if( num2 >= num1 && num2>= num3)
 {
    printf("%d is the largest number among %d,%d,%d. \n",num2,num1,num2,num3);
 } 
 
if( num3 >= num1 && num3 >= num2)
 {
    printf("%d is the largest number among %d,%d,%d. \n", num3,num1,num2,num3);
 }

return 0 ;

}