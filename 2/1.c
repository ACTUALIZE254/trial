#include <stdio.h>

int main() {
    int a, b;

    // Input two integers
    printf("Enter first integer: ");
    scanf("%d", &a);

    printf("Enter second integer: ");
    scanf("%d", &b);

    // Perform arithmetic operations
    printf("\nResults:\n");
    printf("Addition (a + b) = %d\n", a + b);
    printf("Subtraction (a - b) = %d\n", a - b);
    printf("Multiplication (a * b) = %d\n", a * b);

    if (b != 0) {
        printf("Division (a / b) = %d\n", a / b);
        printf("Modulus (a %% b) = %d\n", a % b);
    } else {
        printf("Division and Modulus by zero is not allowed.\n");
    }

    return 0;
}
