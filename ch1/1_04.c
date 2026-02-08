#include <stdio.h>

int main()
{
    float fahr; 
    int cels; 
    
    int start = 0, end = 300, step = 20;

    printf("Celsius Fahrenheit\n");
    printf("------- ----------\n");
    for (cels = start; cels <= end; cels += step){
        fahr = 9.0 / 5.0 * cels + 32.0;
        printf("%7d %10.1f\n", cels, fahr);
    }
}
