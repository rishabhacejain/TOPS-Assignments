#include<stdio.h>

int main() {
    int i, j, arr[3][3];

    // Input elements of the array
    printf("Enter elements of the 3x3 array:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("Enter array[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    // Print the elements of the array
    printf("\nPrinting the elements of the array:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n"); // Add a newline after each row
    }

    return 0;
}
