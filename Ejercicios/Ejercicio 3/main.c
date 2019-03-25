#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero1;
    int numero2;
    int producto;
    int cuadrado;

    printf("Ingrese numero 1: ");
    scanf("%d", &numero1);

    printf("Ingrese numero 2: ");
    scanf("%d", &numero2);


    system("cls");

    producto=numero1 * numero2;
    cuadrado=numero1 * numero1;

    printf("El producto es: %d ", producto);
    printf("\nEl cuadrado del primer numero: %d ", cuadrado);
    return 0;
}
