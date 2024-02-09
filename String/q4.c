#include<stdio.h>
#include<string.h>

int main() {
    char str[100];
    int words = 0, i;

    printf("Enter a string: ");
    gets(str);

    // Iterate through the string
    for(i = 0; str[i] != '\0'; i++) {
        // Increment word count if current character is a space and next character is not a space
        if(str[i] == ' ' && str[i + 1] != ' ') {
            words++;
        }
    }

    // Add 1 to the word count to include the last word
    words++;

    printf("Total number of words: %d\n", words);

    return 0;
}
