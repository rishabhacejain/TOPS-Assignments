// Q9. C Program to Check Uppercase or Lowercase or Digit or Special Character
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter A Character\n");
    scanf("%c",&ch);

    if(ch>='A' && ch<='Z')
    {
        printf("The Character %c is Uppercase ",ch);
    }
    else if(ch>='a' && ch<='z')
    {
        printf("The Character %c is Lowercase");
    }
    else if(ch>='0' && ch<='9')
    {
        printf("The Character %c is a number ");
    }
    else
    {
        printf("The Character %c is a special Character");
    }
}
