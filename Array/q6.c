#include<stdio.h>

int main() {
    int arr1[2][2], arr2[2][2], add[2][2], sub[2][2], mul[2][2], row, col, r, c;

    printf("Enter the values of Array1 (2x2):\n");
    for(row = 0; row < 2; row++) {
        for(col = 0; col < 2; col++) {
            scanf("%d", &arr1[row][col]);
        }
    }

    printf("Enter the values of Array2 (2x2):\n");
    for(row = 0; row < 2; row++) {
        for(col = 0; col < 2; col++) {
            scanf("%d", &arr2[row][col]);
        }
    }

    printf("\nArray1:\n");
    for(row = 0; row < 2; row++) {
        for(col = 0; col < 2; col++) {
            printf("%d ", arr1[row][col]);
        }
        printf("\n");
    }

    printf("\nArray2:\n");
    for(row = 0; row < 2; row++) {
        for(col = 0; col < 2; col++) {
            printf("%d ", arr2[row][col]);
        }
        printf("\n");
    }

    printf("\nAddition array:\n");
    for(row = 0; row < 2; row++) {
        for(col = 0; col < 2; col++) {
            add[row][col] = arr1[row][col] + arr2[row][col];
            printf("%d ", add[row][col]);
        }
        printf("\n");
    }

    printf("\nSubtraction array:\n");
    for(row = 0; row < 2; row++) {
        for(col = 0; col < 2; col++) {
            sub[row][col] = arr1[row][col] - arr2[row][col];
            printf("%d ", sub[row][col]);
        }
        printf("\n");
    }

    printf("\nMultiplication array:\n");
    for(row = 0; row < 2; row++) {
        for(col = 0; col < 2; col++) {
            mul[row][col] = 0;
            for(int k = 0; k < 2; k++) {
                mul[row][col] += arr1[row][k] * arr2[k][col];
            }
            printf("%d ", mul[row][col]);
        }
        printf("\n");
    }

    return 0;
}
