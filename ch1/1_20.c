#include <stdio.h>

#define TABINC 8

int main(void) {
    int c, pos, blanks;

    pos = 0;
    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            blanks = TABINC - pos % TABINC;
            for (int i = 0; i < blanks; ++i) {
                putchar(' ');
            }
            pos += blanks;
        } else if (c == '\n') {
            putchar(c);
            pos = 0;
        } else {
            putchar(c);
            ++pos;

        }
    }
}
