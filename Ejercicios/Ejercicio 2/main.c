#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    int num2;
    int suma;
    //int resultado;

    printf("Ingrese un numero");
    fflush(stdin);
    scanf("%d", &num);

    printf("Ingrese otro numero");
    fflush(stdin);
    scanf("%d", &num2);

    suma=num + num2;
    printf("El resultado es:%d", suma);
}
