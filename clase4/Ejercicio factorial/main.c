#include <stdio.h>
#include <stdlib.h>

long factorial(int num)

int main()
{
    printf("El numero es: ");
    return 0;
}

long factorial(int num)
{
    long rta;

    if(num=<1)
    {
        rta=1;
    }
    else
    {
        rta=num * factorial(num-1);
    }
    return rta;
}
