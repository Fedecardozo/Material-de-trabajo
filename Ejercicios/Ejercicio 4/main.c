#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    int numero2;
    int resta;

    printf("Ingrese numero: ");
    scanf("%d", &numero);

    printf("Ingrese segundo numero: ");
    scanf("%d", &numero2);

    resta= numero - numero2;

    system("cls");

    if(resta==0)
    {
        printf("Resultado: %d", resta);
    }
    else
    {

        if(resta>0)
        {
            printf("Resultado positivo: %d", resta);
        }
        else
        {
            printf("Resultado negativo: %d", resta);
        }

    }


    return 0;
}
