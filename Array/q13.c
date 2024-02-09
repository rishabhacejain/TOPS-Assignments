#include<stdio.h>

int main() {
    int i, numbers[5]; // Renamed array to 'numbers'

    printf("Enter 5 numbers:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
    }

    printf("\nResults:\n");
    for(i = 0; i < 5; i++) {
        if(numbers[i] % 2 == 0) {
            printf("%d is even.\n", numbers[i]);
        } else {
            printf("%d is odd.\n", numbers[i]);
        }
    }

    return 0;
}
