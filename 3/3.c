#include <stdio.h>

int main() {
    int num;

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Outer if: check if number is positive
    if (num > 0) {
        // Inner if: check if number is even
        if (num % 2 == 0) {
            printf("Positive even number.\n");
        } else {
            printf("Positive odd number.\n");
        }
    } else {
        printf("Number is not positive.\n");
    }

    return 0;
}
