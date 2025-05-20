#include <stdio.h>

int main() {
    int a, b;

    // Input two integers
    printf("Enter first integer: ");
    scanf("%d", &a);

    printf("Enter second integer: ");
    scanf("%d", &b);

    // Relational operations
    printf("\nResults:\n");
    printf("a == b: %d\n", a == b);   // Equal to
    printf("a != b: %d\n", a != b);   // Not equal to
    printf("a > b:  %d\n", a > b);    // Greater than
    printf("a < b:  %d\n", a < b);    // Less than
    printf("a >= b: %d\n", a >= b);   // Greater than or equal to
    printf("a <= b: %d\n", a <= b);   // Less than or equal to

    return 0;
}
