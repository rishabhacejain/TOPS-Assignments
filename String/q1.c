#include<stdio.h>

int main() {
    char str[50];
    int length = 0;

    printf("Enter a string: ");
    // Read the string until newline character
    fgets(str, sizeof(str), stdin);

    // Iterate through the string until null terminator is found
    while (str[length] != '\0') {
        length++;
    }

    printf("Length of the string is: %d\n", length);

    return 0;
}