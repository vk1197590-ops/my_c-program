#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num > 0) {      // Outer if
        if (num % 2 == 0) {     // Inner if
            printf("Number is Positive and Even.\n");
        } else {
            printf("Number is Positive but Odd.\n");
        }
    } else {
        printf("Number is not Positive.\n");
    }

    return 0;
}