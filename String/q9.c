#include<stdio.h>
#include<string.h>

int main() {
    int count = 0, maxcount = 0, i, j;
    char maxch, str[50];

    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);

    
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }

    for (i = 0; str[i] != '\0'; i++) {
        count = 0;
        for (j = 0; str[j] != '\0'; j++) {
            if (str[i] == str[j]) {
                count++;
            }
        }
        if (maxcount < count) {
            maxcount = count;
            maxch = str[i];
        }
    }
    printf("The character '%c' repeated maximum of %d times\n", maxch, maxcount);

    return 0;
}
