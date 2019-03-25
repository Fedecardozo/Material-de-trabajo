#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159265358979323846

int main()
{
    float circunferencia;
    float area;
    float radio;


    printf("Ingrese radio del circulo");
    scanf("%f", &radio);

    circunferencia = 2*PI*radio;
    area =PI*(radio*radio);

    printf("\nCircunferencia: %.2f\n", circunferencia);
    printf("Area: %.2f", area);
    return 0;
}
