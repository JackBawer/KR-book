#include <stdio.h> 

#define MINLINE 80     /* minimum input line length to be printed*/
#define MAXLINE 1000   /* maximum input line length */ 
#define MAXINPUT 100  /* maximum number of input lines */

int get_line(char s[], int lim);
void copy(char to[], char from[]); 

/* print the longest input line */ 
int main(void) 
{ 
    int len;            /* current line length */ 
    char line[MAXLINE];    /* current input line */ 
    char long_lines[MAXINPUT][MAXLINE]; /* array of strings*/ 

    int i = 0;
    while ((len = get_line(line, MAXLINE)) > 0) {
        if (len > MINLINE) { 
            copy(long_lines[i], line); 
            ++i;
        } 
    }
    putchar('\n');

    /* there was a line */ 
    for (int j = 0; j < i; ++j) {
        printf("line %d: %s", j + 1, long_lines[j]);
    }
    putchar('\n');

    return 0; 
} 

/* getline:  read a line into s, return length  */ 
int get_line(char s[], int lim) { 
    int c, i; 

    for (i=0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
        s[i] = c; 
    }
    if (c == '\n') { 
        s[i] = c; 
        ++i; 
    } 
    s[i] = '\0'; 
    return i; 
} 

/* copy:  copy 'from' into 'to'; assume to is big enough */ 
void copy(char to[], char from[]) 
{ 
    int i; 

    i = 0; 
    while ((to[i] = from[i]) != '\0') {
        ++i; 
    }
}
