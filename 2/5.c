#include <stdio.h>

int main() {
    int a = 5, b;

    printf("Initial value of a: %d\n\n", a);

    // Pre-increment
    b = ++a;  // a becomes 6, then assigned to b
    printf("After pre-increment (++a):\n");
    printf("a = %d, b = %d\n\n", a, b);

    // Post-increment
    b = a++;  // a is assigned to b (6), then a becomes 7
    printf("After post-increment (a++):\n");
    printf("a = %d, b = %d\n\n", a, b);

    // Pre-decrement
    b = --a;  // a becomes 6, then assigned to b
    printf("After pre-decrement (--a):\n");
    printf("a = %d, b = %d\n\n", a, b);

    // Post-decrement
    b = a--;  // a is assigned to b (6), then a becomes 5
    printf("After post-decrement (a--):\n");
    printf("a = %d, b = %d\n", a, b);

    return 0;
}
