#include<stdio.h>
#include<string.h>

int main() {
    char str[150];
    int i, j;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Removing the newline character if present
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }

    for (i = 0, j = 0; str[i] != '\0'; ++i) {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            str[j++] = str[i];
        }
    }
    str[j] = '\0'; 

    printf("Resultant String: %s\n", str);

    return 0;
}