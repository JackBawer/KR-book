#include <stdio.h>

int main(void) {
    int c;

    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            printf("\\");
            printf("t");
        } else if (c == '\b') {
            // My terminal as most terminals is in "cooked" mode such that keys
            // like backspace are handled by the terminal driver
            printf("\\");
            printf("b");
        } else if (c == '\\') {
            printf("\\");
            printf("\\");
        } else {
            putchar(c);
        }
    }
}
