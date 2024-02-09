#include<stdio.h>
#include<string.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    gets(str);

    int length = strlen(str);

    printf("Individual characters of the string in reverse order:\n");
    for(int i = length - 1; i >= 0; i--) {
        printf("%c ", str[i]);
    }
    printf("\n");

    return 0;
}
