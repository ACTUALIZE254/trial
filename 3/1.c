#include <stdio.h>

int main() {
    int num;

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is positive
    if (num > 0) {
        printf("The number is positive.\n");
    }

    return 0;
}
