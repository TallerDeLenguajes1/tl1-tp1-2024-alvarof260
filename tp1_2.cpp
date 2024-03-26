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

    printf("El cuadrado del numero es: %d", cuadrado1(n));




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
    printf("Segundo cuadrado: %d", *n);
}