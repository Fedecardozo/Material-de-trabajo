#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    int suma=0;
    float medida;
    int contador=0;

    while(contador<5)
    {
        printf("Ingrese un numero");
        fflush(stdin);
        scanf("%d", &num);

        while(num>10)
        {
            printf("Error, ingrese otro numero");
            fflush(stdin);
            scanf("%d", &num);
        }
        contador++;
        suma = suma + num;
        medida = suma /2;
    }
    printf("La medida es: %.2f", medida);
    return 0;
}
