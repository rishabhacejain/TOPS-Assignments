#include<stdio.h>
#include<string.h>

int main() {
    char str1[20], str2[20];
    
    printf("Enter any string: ");
    fgets(str1, sizeof(str1), stdin);

    // Remove the newline character from the input string if present
    if (str1[strlen(str1) - 1] == '\n') {
        str1[strlen(str1) - 1] = '\0';
    }

    // Ensure null termination of the second string
    str2[0] = '\0';

    // Copy the contents of str1 to str2
    strcpy(str2, str1);

    printf("Original string: %s\n", str1);
    printf("Copied string: %s\n", str2);

    return 0;
}
