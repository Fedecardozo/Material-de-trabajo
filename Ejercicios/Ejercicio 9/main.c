#include <stdio.h>
#include <stdlib.h>

int main()
{
    char letra;
    int contadorA=0;
    int contadorE=0;
    int contadorI=0;
    int contadorO=0;
    int contadorU=0;
    int contador;

    for(contador=0;contador<20;contador++)
    {
        printf("Ingrese 20 letras: ");
        fflush(stdin);
        scanf("%c", &letra);

        switch(letra)
        {
            case 'a':
            contadorA++;
            break;

            case 'e':
            contadorE++;
            break;

            case 'i':
            contadorI++;
            break;

            case 'o':
            contadorO++;
            break;

            case 'u':
            contadorU++;
            break;
        }

    }

    printf("Las letras A son: %d ", contadorA);
    printf("\nLas letras E: %d, I: %d, O: %d, U: %d ", contadorE, contadorI, contadorO, contadorU);


    return 0;
}
