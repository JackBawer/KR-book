#include <stdio.h>

int main(void) {
    int x = 42; 
    int *ip;
    ip = &x;
    printf("The address of x is: %p\n", (void*) ip);
    printf("The value of x is: %d\n", *ip);
}
