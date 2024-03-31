#include <stdio.h>

int cuadrado1(int n);
void cuadrado(int *n);

int main()
{
    printf("Ingrese un numero: ");
    int n;
    int *np;

    scanf("%d", &n);

    np = &n;

    cuadrado(np);

    printf("%d", n);

    /* cuadrado = cuadrado1(n);

    printf("El cuadrado del numero es: %d", cuadrado); */

    return 0;
}

int cuadrado1(int n)
{
    int cuadrado;
    cuadrado = n * n;

    return cuadrado;
}

void cuadrado(int *n)
{
    *n *= *n;
}