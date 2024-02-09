#include <stdio.h>

int main() {
    char a[5][100];
    int r;

    for(r = 0; r < 5; r++) {
        printf("Enter name: ");
        scanf("%99s", a[r]); // Use %99s to read up to 99 characters
        a[r][99] = '\0';
    }

    printf("\nEntered names:\n");
    for(r = 0; r < 5; r++) {
        printf("%s\n", a[r]);
    }

    return 0;
}
