#include <stdio.h>

int main() {
    int a = 10;
    int b = 5;

    printf("Initial values: a = %d, b = %d\n\n", a, b);

    // Basic assignment
    a = 15;
    printf("After a = 15: a = %d\n", a);

    // += operator
    a += b;  // a = a + b
    printf("After a += b: a = %d\n", a);

    // -= operator
    a -= b;  // a = a - b
    printf("After a -= b: a = %d\n", a);

    // *= operator
    a *= b;  // a = a * b
    printf("After a *= b: a = %d\n", a);

    // /= operator
    a /= b;  // a = a / b
    printf("After a /= b: a = %d\n", a);

    // %= operator
    a %= b;  // a = a % b
    printf("After a %%= b: a = %d\n", a);

    return 0;
}
