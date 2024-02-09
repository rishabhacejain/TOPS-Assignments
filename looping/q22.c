//q22
/*Accept 3 numbers from user using while loop and check each numbers
palindrome*/



#include<stdio.h>

int main() {
    int num, reverse, rem, temp, i;

    for(i = 1; i <= 3; i++) {
        printf("Enter a number: ");
        scanf("%d", &num);

        if(num < 0) {
            printf("Please enter a positive number.\n");
            continue; 
        }

        temp = num;
        reverse = 0; 

        do {
            rem = temp % 10;
            reverse = reverse * 10 + rem;
            temp /= 10;
        } while(temp != 0);

        printf("Reversed number: %d\n", reverse);

        if(reverse == num) {
            printf("%d is a palindrome number.\n", num); 
        } else {
            printf("%d is not a palindrome number.\n", num); 
        }
    }

    return 0;
}
