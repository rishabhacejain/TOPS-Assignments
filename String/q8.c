#include<stdio.h>
#include<string.h>

int main() {
    int vowels = 0, consonants = 0, i;
    char str[50];

    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);

    // Remove the newline character from the input string if present
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }

    for (i = 0; str[i] != '\0'; i++) {
        // Convert uppercase letters to lowercase
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32; // Adding 32 converts uppercase to lowercase in ASCII
        }

        // Check if character is an alphabet
        if ((str[i] >= 'a' && str[i] <= 'z')) {
            // Check if the character is a vowel
            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}
