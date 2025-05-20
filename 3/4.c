#include <stdio.h>

int main() {
    int mark;

    // Input marks
    printf("Enter your mark (0 - 100): ");
    scanf("%d", &mark);

    // Check grade using else-if ladder
    if (mark >= 90) {
        printf("Grade A\n");
    } else if (mark >= 75) {
        printf("Grade B\n");
    } else if (mark >= 60) {
        printf("Grade C\n");
    } else if (mark >= 40) {
        printf("Grade D\n");
    } else {
        printf("Fail\n");
    }

    return 0;
}
