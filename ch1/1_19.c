#include <stdio.h>

#define MAXLINE 100

int get_line(char s[], int lim);
void reverse(char r[], char s[], int len);

int main(void) {
    int len;
    char line[MAXLINE];
    char rev[MAXLINE];

    while ((len = get_line(line, MAXLINE)) > 0) {
        reverse(rev, line, len);
        printf("reversed: %s\n", rev);
    }
}

int get_line(char s[], int lim) { 
    int c, i; 

    for (i=0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
        s[i] = c; 
    }
    // if (c == '\n') { 
    //     s[i] = c; 
    //     ++i; 
    // } 
    s[i] = '\0'; 
    return i; 
} 

void reverse(char r[], char s[], int len) {
    int i;
    for (i = 0; i < len; ++i) {
        r[i] = s[len - 1 - i];
    }
    r[i] = '\0';
}

