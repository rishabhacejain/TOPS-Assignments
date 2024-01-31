// 14.Find ascii value of given number
#include<stdio.h>
int main() {  
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);  
    
    // %d displays the integer value of a character
    // %c displays the actual character
    printf("ASCII value of %d = %d", num, num);
    
    return 0;
}
