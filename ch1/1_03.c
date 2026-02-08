#include <stdio.h>

int main()
{
    float cels; 
    int fahr; 
    
    int start = 0, end = 300, step = 20;

    printf("Fahr  Cels\n");
    printf("----  -----\n");
    for (fahr = start; fahr <= end; fahr += step){
        cels = 5.0 / 9.0 * (fahr - 32.0);
        printf(" %3d %6.1f\n", fahr, cels);
    }
}
