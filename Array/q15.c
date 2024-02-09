#include <stdio.h>

int main() {
    int a[5], i, j, temp;

    // Input elements into the array
    printf("Enter 5 numbers:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }

    // Bubble sort to arrange elements in ascending order
    for(i = 0; i < 5 - 1; i++) {
        for(j = 0; j < 5 - i - 1; j++) {
            if(a[j] > a[j + 1]) {
                // Swap if the current element is greater than the next element
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    // Print the sorted array in ascending order
    printf("\nSorted array in ascending order:\n");
    for(i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
