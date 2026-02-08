#include <stdbool.h>
#include <stdio.h> 

#define MAXLINE 100   /* maximum input line length */ 
#define MAXINPUT 100  /* maximum number of input lines */

int get_line(char s[], int lim);
void copy(char to[], char from[]); 

/* print the longest input line */ 
int main(void) { 
    int len, blank_len;            /* current line length */ 
    char line[MAXLINE];    /* current input line */ 
    char trailess[MAXLINE];    /* trailess line */
    char lines[MAXINPUT][MAXLINE]; /* array of strings*/ 

    bool blank = true;
    bool yet = false;

    int i = 0;
    while ((len = get_line(line, MAXLINE))) {
        for (int j = 0; j < len; ++j) {
            if (line[j] != ' ' && line[j] != '\t' && line[j] != '\n') {
                blank = false;
                break;
            }
        }
        if (!blank) {
            blank_len = 0;
            for (int k = len - 1; k >= 0; --k) {
                if (line[k] == ' ' || line[k] == '\t')  {
                    ++blank_len;
                } else {
                    break;
                }
            }
            for (int q = 0; q < len - blank_len; ++q) {
                trailess[q] = line[q];
            }
            copy(lines[i], trailess);
            ++i;
        }
    } 
    putchar('\n');

    /* there was a line */ 
    for (int j = 0; j < i; ++j) {
        printf("line %d: %s", j + 1, lines[j]);
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
