#include <stdio.h>

int main() {
    int num;

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if number is positive or negative
    if (num >= 0) {
        printf("Positive number.\n");
    } else {
        printf("Negative number.\n");
    }

    return 0;
}
