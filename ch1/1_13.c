#include <stdio.h>

#define IN 1
#define OUT 0

#define MAX_LEN 10

int main(void) {
    int c, nwc, state;
    int wlen[MAX_LEN];

    for (int i = 0; i < MAX_LEN; ++i) {
        wlen[i] = 0;
    }

    state = OUT;
    nwc = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            if (state == IN) {
                if (nwc > 0) {
                    if (nwc > MAX_LEN) {
                        ++wlen[MAX_LEN - 1];
                    } else {
                        ++wlen[nwc - 1];
                    }
                }
                nwc = 0;
            }
            state = OUT;
        } else {
            ++nwc;
            state = IN;
        }
    }
    putchar('\n');
    if (nwc > 0) {
        if (nwc > 10) {
            ++wlen[MAX_LEN - 1];
        } else {
            ++wlen[nwc - 1];
        }
    }

    for (int i = 0; i < MAX_LEN; ++i) {
        printf("[%2d] ", i + 1);
        for (int j = 0; j < wlen[i]; ++j) {
            printf("|");
        }
        printf("\n");
    }
}
