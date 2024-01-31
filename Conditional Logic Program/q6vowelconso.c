// Q6. Find the Character Is Vowel or Not
#include<stdio.h>
int main()
{
    char ch;
    char lower_case,upper_case;

    printf("Enter a Character\n");
    scanf("%c",&ch);

    lower_case=(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u');
    upper_case=(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U');

    if(lower_case||upper_case)
    {
        printf("The Character %c is a Vowel",ch);
    }

    else
    {
        printf("The Charcter %c is a Consonent",ch);
    }

    
    return 0;
}