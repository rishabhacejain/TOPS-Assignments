#include <stdio.h>

int main() {
    int choice;
    float num1, num2;
    
    do {
        // Display menu options
        printf("Menu:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        // Process the user's choice
        switch(choice) {
            case 1:{
                     float  sum;
                     printf("Enter the first number: ");
                     scanf("%f", &num1);
                     printf("Enter the second number: ");
                     scanf("%f", &num2);
                     sum = num1 + num2;
                     printf("Addition = %.2f\n", sum);
            break;
                   }
            case 2:{
                     float  difference;
                     printf("Enter the first number: ");
                     scanf("%f", &num1);
                     printf("Enter the second number: ");
                     scanf("%f", &num2);
                     difference = num1 - num2;
                     printf("Difference = %.2f\n", difference);
            break;
                    }
            case 3:{
                     float product;
                     printf("Enter the first number: ");
                     scanf("%f", &num1);
                     printf("Enter the second number: ");
                     scanf("%f", &num2);
                     product = num1 * num2;
                     printf("Product = %.2f\n", product);
            break;
                   }
            case 4:{
                     float quotient;
                     printf("Enter the first number: ");
                     scanf("%f", &num1);
                     printf("Enter the second number: ");
                     scanf("%f", &num2);
                     if (num2 == 0) 
                    {
                     printf("Error: Division by zero is not allowed.\n");
                    }
                    else 
                    {
                     quotient = num1 / num2;
                     printf("Division= %.2f\n", quotient);
                    }
            break;
                    }
            case 5:
                printf("Exiting the calculator...\n");
            break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 5);
    
    return 0;
}