#include <stdio.h>

void main() {
    int choice;
    float a, b, result;

    printf("=== Simple Calculator ===\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    switch(choice) {
        case 1:
            result = a + b;
            printf("Result = %.2f", result);
            break;

        case 2:
            result = a - b;
            printf("Result = %.2f", result);
            break;

        case 3:
            result = a * b;
            printf("Result = %.2f", result);
            break;

        case 4:
            if (b == 0) {
                printf("Division by zero is not allowed");
            } else {
                result = a / b;
                printf("Result = %.2f", result);
            }
            break;

        default:
            printf("Invalid choice");
    }
}
