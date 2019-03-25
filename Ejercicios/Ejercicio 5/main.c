#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    int cuadrado;

    printf("Ingrse numero: ");
    scanf("%d", &numero);

    while(numero<0)
    {
        printf("Error, el numero tiene que ser mayor a 0: \n");
        scanf("%d", &numero);
    }
    cuadrado= numero * numero;
    printf("El resultado es: %d", cuadrado);
    return 0;
}
