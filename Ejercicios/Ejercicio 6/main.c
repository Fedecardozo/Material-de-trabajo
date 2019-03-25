#include <stdio.h>
#include <stdlib.h>

int main()
{
    int contador;
    int numero;
    int contadorMayor=0;
    int contadorMenor=0;

    for(contador=0;contador<10;contador++)
    {
        printf("Ingrese numero: ");
        scanf("%d", &numero);

        if(numero>0)
        {
            contadorMayor++;
        }
        else
        {
            if(numero<0)
            {
                contadorMenor++;
            }
        }

    }
    printf("Los numeros mayor a 0 son: %d\n", contadorMayor);
    printf("Los numeros menor a 0 son: %d", contadorMenor);
    return 0;
}
