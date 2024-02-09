//q19-1
/*
1
10
101
1010
10101*/

#include<stdio.h>

int main() {
    int row, col;

    for(row = 1; row <= 5; row++) {
        for(col = 1; col <= row; col++) {
            if(col%2==0) { // Check if column index is at even position or not
                printf("0"); //at even position print 0
            } else {
                printf("1"); //at odd position print 1
            }
        }
        printf("\n");
    }

    return 0;
}
