#include <stdio.h>

int main(void) {
    int bl, tb, nl, c;

    bl = 0; tb = 0; nl = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ')
            ++bl;
        if (c == '\t')
            ++tb;
        if (c == '\n')
            ++nl;
    }

    printf("Number of blanks  : %d\n", bl);
    printf("Number of tabs    : %d\n", tb);
    printf("Number of newlines: %d\n", nl);
}
