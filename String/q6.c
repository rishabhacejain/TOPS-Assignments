#include <stdio.h>
#include <string.h>

int main() {
    int alpha = 0, digit = 0, sp = 0, i;
    char str[50];

    printf("Enter your string: ");
    fgets(str, sizeof(str), stdin); 

    for (i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            alpha++;
        } else if (str[i] >= '0' && str[i] <= '9') {
            digit++;
        } else if (str[i] != '\n') {  
            sp++;
        }
    }

    printf("Alphabets = %d\n", alpha);
    printf("Digits = %d\n", digit);
    printf("Special characters = %d\n", sp);

    return 0;
}
