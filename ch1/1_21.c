#include <stdio.h>

#define TABINC 8

int main(void) {
    int c, pos, blanks, spaces;

    pos = blanks = spaces = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            ++spaces;
        } else if (c == '\n') {
            putchar(c);
            pos = 0;
            spaces = 0;
        } else {
            blanks = TABINC - pos % TABINC;
            if (spaces >= blanks) {
                blanks = TABINC - pos % TABINC;
                while (spaces > blanks) {
                    blanks = TABINC - pos % TABINC;
                    putchar('\t');
                    spaces -= blanks;
                    pos += blanks;
                }
                for (int i = 0; i < spaces; ++i) {
                    putchar(' ');
                    ++pos;
                }
                spaces = 0;
            } else {
                for (int i = 0; i < spaces; ++i) {
                    putchar(' ');
                    ++pos;
                }
                spaces = 0;
            }
            putchar(c);
            ++pos;

        }
    }
}
