#include <stdio.h>
#include <stdlib.h>

int main()
{
   /* int contador=0;
    int numero;
    char respuesta='s';
    int contadorImpar=0;

    do
    {
        printf("Ingrese numero: ");
        fflush(stdin);
        scanf("%d", &numero);

        while(numero<0 || numero>100)
        {
            printf("Error, ingrese numero entre 0 y 100: ");
            fflush(stdin);
            scanf("%d", &numero);
        }
        contador++;

        printf("Desea continuar? ");
        fflush(stdin);
        scanf("%c", &respuesta);

        if(numero %2 !=0)
        {
            contadorImpar++;
        }

    }while(respuesta=='s');

    printf("La cantidad de impares son: %d", contadorImpar);*/

    int numero;
    int contadorImpar=0;

    for(numero=0; numero<101; numero++)
    {
        if(numero%2 !=0)
        {
            contadorImpar++;
            printf("Numero impar: %d\n", numero);
        }
    }
    printf("La cantidad de numeros impares son: %d", contadorImpar);


    return 0;
}
