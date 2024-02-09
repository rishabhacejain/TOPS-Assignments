#include<stdio.h>
#include<string.h>

int main() {
    char str[100];
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Removing the newline character if present
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }

    for (i = 0; str[i] != '\0'; i++) {
        // Convert lowercase to uppercase
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
        // Convert uppercase to lowercase
        else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        }
    }

    printf("Modified string: %s\n", str);

    return 0;
}
