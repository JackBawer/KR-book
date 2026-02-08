#include <stdio.h>

#define NUM_ALPHA 26

int main(void) {
    int c, nl, nt, nb, nc;
    int letters[NUM_ALPHA];

    for (int i = 0; i < NUM_ALPHA; ++i) {
        letters[i] = 0;
    }

    nl = nt = nb = nc = 0;
    while ((c = getchar()) != EOF) {
        ++nc;
        if (c == ' ') {
            ++nb;
        } else if (c == '\t') {
            ++nt;
        } else if (c == '\n') {
            ++nl;
        } else {
            ++letters[c - 'a'];
        }
    }
    putchar('\n');

    printf("[  ] %d\n", nb);
    printf("[\\t] %d\n", nt);
    printf("[\\n] %d\n", nl);
    for (int i = 0; i < NUM_ALPHA; ++i) {
        printf("[%2c] %d\n", i + 'a', letters[i]);
    }
}
