#include <stdio.h>
#include <iostream>

// int potencia(int base, int exponente);
void potencia(int base, int exponente);
void invertir(int *a, int *b);
void orden(int *a, int *b);

int main()
{
    int numero1, numero2;

    std::cout << "Ingrese el primer numero entero: ";
    std::cin >> numero1;

    std::cout << "Ingrese el segundo numero entero: ";
    std::cin >> numero2;

    std::cout << "\nNumeros ingresados antes de ordenar: " << std::endl;
    std::cout << "Numero 1: " << numero1 << std::endl;
    std::cout << "Numero 2: " << numero2 << std::endl;

    std::cout << "\nEl cuadrado del primer numero es: ";
    potencia(numero1, 2);

    orden(&numero1, &numero2);

    std::cout << "\nNumeros ordenados: " << std::endl;
    std::cout << "Numero 1: " << numero1 << std::endl;
    std::cout << "Numero 2: " << numero2 << std::endl;

    invertir(&numero1, &numero2);

    std::cout << "\nNumeros invertidos: " << std::endl;
    std::cout << "Numero 1: " << numero1 << std::endl;
    std::cout << "Numero 2: " << numero2 << std::endl;
    return 0;
}
/*
int potencia(int base, int exponente)
{
    int resultado = 1;
    for (int i = 0; i < exponente; i++)
    {
        resultado *= base;
    }
    return resultado;
} */

void potencia(int base, int exponente)
{
    int resultado = 1;
    for (int i = 0; i < exponente; i++)
    {
        resultado *= base;
    }
    std::cout << "El numero elevado a 2 es: " << resultado << std::endl;
}

void invertir(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void orden(int *a, int *b)
{
    if (*a > *b)
    {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
}