// 2. WAP to accept 5 numbers from user and display all numbers
#include<stdio.h>

int main()
{
     
     int num[5];

     printf("Enter a 5 number:\n");
     for(int i=0; i<=4;i++)
     {
      scanf("%d", &num[i]);
     }
     printf("\n");
     printf("The Five Numbers are displayed Below \n");
      for(int i=0; i<=4;i++)
     {
      printf("%d \n",num[i]);
     }
     

    return 0;
}

   