#include<stdio.h>

int main() {
    char string[100];

    printf("Enter a string: ");
    fgets(string, sizeof(string), stdin);

    printf("Individual characters from given string:\n");
    
    int i = 0;
    while (string[i] != '\0') {
        printf("%c ", string[i]);
        i++;
    }

    return 0;
}
