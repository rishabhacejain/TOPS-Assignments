// Find character value from ascii
#include<stdio.h>
int main()
{
    
    char a;
    printf("Enter a ascii value: ");
    scanf("%d", &a);  
    
    // %d displays the integer value of a character
    // %c displays the actual character
    printf("Character of assci value  %d = %c", a, a);
    
    return 0;
}

//Vice versa
// Find ASCII value from from character
/* #include<stdio.h>
int main()
{
    char a;
    printf("Enter a Character: ");
    scanf("%c", &a);  
    
    // %d displays the integer value of a character
    // %c displays the actual character
    printf("The ASCII value of Character  %c = %d", a, a);
    
    return 0;

} */