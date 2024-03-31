#include <stdio.h>
#include <iostream>

// int potencia(int base, int exponente);
void potencia(int base, int exponente);

int main()
{
    int numero;
    // int respuesta;
    std::cout << "Ingrese un numero entero: ";
    std::cin >> numero;
    // respuesta = potencia(numero, 2);
    // std::cout << "El numero elevado a 2 es: " << respuesta << std::endl;
    potencia(numero, 2);
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