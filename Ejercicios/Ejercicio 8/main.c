#include <stdio.h>
#include <stdlib.h>

int main()
{
    float base;
    float altura;
    float superficie;

    printf("Ingrese base de su triangulo: ");
    scanf("%f", &base);

    printf("Ingrese la altura del triangulo: ");
    scanf("%f", &altura);

    superficie = (altura/2)*base;
    printf("La superficie es: %.2f", superficie);
    return 0;
}
