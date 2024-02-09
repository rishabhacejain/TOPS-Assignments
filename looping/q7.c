// Q7. WAP to print number in reverse order e.g.: number = 64728 ---> reverse = 82746
#include<stdio.h>

int main()
{

   int num, rev = 0, rem;               //rev to store reversed number and rem to save remainder after removing last digit

   printf("Enter a Number: ");
   scanf("%d",&num );

   while( num != 0)
   {
    rem = num % 10;
    rev = rev * 10 + rem;
    num = num / 10;
   }

   printf(" reverse number is: %d\n", rev);
 
    return 0;
}