#include <stdio.h>

int main() {
    int a, b;

    // Input two integers
    printf("Enter first number (a): ");
    scanf("%d", &a);

    printf("Enter second number (b): ");
    scanf("%d", &b);

    // Logical operations
    printf("\nResults:\n");

    // Logical AND
    if (a > 0 && b > 0) {
        printf("Both a and b are positive (a > 0 && b > 0): TRUE\n");
    } else {
        printf("Both a and b are positive (a > 0 && b > 0): FALSE\n");
    }

    // Logical OR
    if (a > 0 || b > 0) {
        printf("At least one of a or b is positive (a > 0 || b > 0): TRUE\n");
    } else {
        printf("At least one of a or b is positive (a > 0 || b > 0): FALSE\n");
    }

    // Logical NOT
    if (!(a == b)) {
        printf("a and b are NOT equal (!(a == b)): TRUE\n");
    } else {
        printf("a and b are NOT equal (!(a == b)): FALSE\n");
    }

    return 0;
}
