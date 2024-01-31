// Convert country’s name in abbreviate form
#include<stdio.h>
int main()
{
 char country_name[20];

 printf("Enter The Countries Name \n");
 scanf("%s",country_name);

 printf("The Abbreviated Name Of %s is %c%c%c",country_name,country_name[0],country_name[1],country_name[2]);

 return 0; 
}

