#include<stdio.h>
#include<string.h>

int main() {
    char str[100], word[] = " is ";
    int i, j, ls, lw, countw = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Removing the newline character if present
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }

    ls = strlen(str); // String length
    lw = strlen(word); // Word length

    for (i = 0; i < ls; i++) {
        if (strncmp(&str[i], word, lw) == 0) { // Check if the substring matches the word
            countw++; // Increment the count if the word is found
            i += lw - 1; // Move the index to skip the word
        }
    }

    printf("Number of occurrences of 'is': %d\n", countw);

    return 0;
}
