#include<stdio.h>

int main() {
    char str1[50], str2[50];
    int i;

    printf("Enter string1: ");
    gets(str1);

    printf("Enter string2: ");
    gets(str2);

    // Compare characters of both strings until a difference is found or end of either string is reached
    for(i = 0; str1[i] != '\0' && str2[i] != '\0'; i++) {
        if(str1[i] < str2[i]) 
        {
            printf("\n%s is less than %s\n", str1, str2);
            return 0;
        }
        else if(str1[i] > str2[i]) {
            printf("\n%s is greater than %s\n", str1, str2);
            return 0;
        }
    }

    // If both strings are equal till the end of one of the strings
    if(str1[i] == '\0' && str2[i] == '\0') {
        printf("\n%s is equal to %s\n", str1, str2);
    }
    // If one string is shorter than the other
    else if(str1[i] == '\0') {
        printf("\n%s is less than %s\n", str1, str2);
    }
    else {
        printf("\n%s is greater than %s\n", str1, str2);
    }

    return 0;
}
