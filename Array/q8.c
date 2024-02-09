#include<stdio.h>
#include<string.h>

int main() {
    char str[50];
    int i, len, flag = 0;

    printf("Enter name: ");
    scanf("%s", str);

    len = strlen(str);

    // Reverse the string manually
    char reversed_str[50];
    for(i = 0; i < len; i++) {
        reversed_str[i] = str[len - i - 1];
    }
    reversed_str[len] = '\0'; 

    printf("Reverse string: %s\n", reversed_str);

    // Check if the string is a palindrome
    for(i = 0; i < len; i++) {
        if(str[i] != str[len - i - 1]) {
            flag = 1;
            break;
        }
    }
    if(flag == 0) {
        printf("%s is a palindrome string\n", str);
    } else {
        printf("%s is not a palindrome string\n", str);
    }

    return 0;
}
