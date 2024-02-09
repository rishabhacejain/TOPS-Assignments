#include<stdio.h>
#include<string.h>

int main() {
    int i = 0, j = 0, k = 0, minIndex = 0, maxIndex = 0, max = 0, min = 0;
    char str1[100] = {0}, substr[100][100] = {0};

    printf("Enter a sentence: ");
    gets(str1);

    while (str1[k] != '\0') {
        j = 0;
      
        while (str1[k] != ' ' && str1[k] != '\0') {
            substr[i][j] = str1[k];
            k++;
            j++;
        }
        substr[i][j] = '\0';
        i++;
        // Skip the space
        if (str1[k] != '\0') {
            k++;
        }
    }
    int len = i;

    // Initialize max and min word lengths
    max = strlen(substr[0]);
    min = strlen(substr[0]);

    // Find the largest and smallest words
    for (i = 0; i < len; i++) {
        int word_length = strlen(substr[i]);
        if (word_length > max) {
            max = word_length;
            maxIndex = i;
        }
        if (word_length < min) {
            min = word_length;
            minIndex = i;
        }
    }

    printf("Largest Word is: %s\n", substr[maxIndex]);
    printf("Smallest word is: %s\n", substr[minIndex]);

    return 0;
}
