#include <stdio.h>

#define IN 1
#define OUT 0

int main(void) {
    int c, blank = OUT;

    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            blank = IN;
        } else {
            if (blank == IN) {
                putchar(' ');
                blank = OUT;
            }
            putchar(c);
        }
    }
}
