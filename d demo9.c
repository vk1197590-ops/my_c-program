#include <stdio.h>
#include <string.h>

int main() {
    char str[50];
    char *start, *end, temp;

    printf("Enter a string: ");
    scanf("%s", str);

    start = str;                     // Pointer at beginning
    end = str + strlen(str) - 1;     // Pointer at end

    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

    printf("Reversed string = %s", str);

    return 0;
}