#include <stdio.h>

int lower(int c);

int main(void) {
    char c = 'B';
    printf("%c\n", lower(c));
}

int lower(int c) 
{ 
    return (c >= 'A' && c <= 'Z') ? c + 'a' - 'A' : c;
}
