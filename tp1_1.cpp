#include <stdio.h>

int main()
{
    int x;
    printf("Hola mundo!");
    scanf("%d", &x);
    int *p;
    p = &x;
    printf("Contenido del puntero: %d\n",*p);
    printf("Direccion de memoria %p\n", p);
    printf("Direccion de memoria de la variable %p\n", &x);
    printf("Direccion de memoria del puntero %p\n", &p);
    printf("Tamaño de memoria: %d", sizeof(x));
    return 0;
}