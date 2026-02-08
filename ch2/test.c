#include <ctype.h>
#include <stdio.h>

int htoi(char s[]);

int main(void) {
    char s[] = "953FABCE";
    int x = 0x9F;
    printf("%X\n", htoi(s));
    return 0;
}

int htoi(char s[]) {
    for (int i = 0; s[i]; ++i) {
        s[i] = tolower(s[i]);
    }
    int start, n;
    n = 0;
    if (s[0] == '0' && (s[1] == 'x' || s[1] == 'X')) {
        start = 2;
    } else {
        start = 0;
    }
    for (int i = start; s[i] >= '0' && s[i] <= '9' || s[i] >= 'a' && s[i] <= 'f'; ++i) {
        if (s[i] >= '0' && s[i] <= '9') {
            n = 16 * n + (s[i] - '0');
        } else if ((s[i] >= 'a' || s[i] >= 'A') && (s[i] <= 'f' || s[i] <= 'F')) {
            n = 16 * n + (s[i] - 'a') + 10;
        } else {
            return -1;
        }
    }
    return n;
}
