#include<stdio.h>
int main()
{
    float celsius,farhenheit;
    printf("Enter The Temperature in Celsius.\n");
    scanf("%f",&celsius);

    farhenheit = (celsius * 1.8) + 32;
    printf("The Temperature in Farhenheit is %.2f",farhenheit);

    return 0;
    
}