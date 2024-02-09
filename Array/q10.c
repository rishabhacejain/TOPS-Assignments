#include<stdio.h>

int palindrome(int num) {
    int temp = num, rem, rev = 0;

    while(temp != 0) {
        rem = temp % 10;
        rev = rev * 10 + rem;
        temp = temp / 10;
    }

    if(rev == num) {
        return 0;
    } else {
        return 1;
    }
}

int main() {
    int num;

    printf("Enter number: ");
    scanf("%d", &num);

    if(palindrome(num) == 0) {
        printf("%d is a palindrome\n", num);
    } else {
        printf("%d is not a palindrome\n", num);
    }
    
    return 0;
}
