#include <stdio.h>

void main() {
    int a, b;
    float result;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (b == 0) {
        printf("Division by zero is not allowed");
    } else {
        result = (float)a / b;
        printf("Result = %.2f", result);
    }
}
