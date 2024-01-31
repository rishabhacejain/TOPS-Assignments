//Accept month number and display month name
#include<stdio.h>
int main()
{
   int month;
   printf("Enter The Month Number(1-12)");
   scanf("%d",&month);

   if(month==1)
   {
    printf("The Month is january");
   }

   else if(month==2)
   {
    printf("The Month is February");
   }
   else if (month==3)
   {
    printf("The Month is March");
   }
   else if (month==4)
   {
    printf("The Month is April");
   }

   else if(month==5)
   {
    printf("The Month is May");
   }
   else if (month==6)
   {
    printf("The Month is June");
   }

   else if (month==7)
   {
    printf("The Month is July");
   }
   else if (month==8)
   {
    printf("The Month is August");
   }

   else if (month==9)
   {
    printf("The Month is September");
   }
   else if (month==10)
   {
    printf("The Month is October");
   }
   else if (month==11)
   {
    printf("The Month is November");
   }
   else if (month==12)
   {
    printf("The Month is December");
   }
   else
   printf("The Input is Invalid");
   

  return 0;
}