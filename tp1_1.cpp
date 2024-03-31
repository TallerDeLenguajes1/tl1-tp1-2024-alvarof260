#include <stdio.h>
#include <iostream>

int main()
{
    int number;
    int *pint;
    number = 5;
    pint = &number;
    std::cout << "el contenido del puntero es: " << *pint << std::endl;
    std::cout << "la direccion de memoria almacenada en el puntero es: " << pint << std::endl;
    std::cout << "la direccion de memoria de la variable es: " << &number << std::endl;
    std::cout << "la direccion de memoria almacenada en el puntero es: " << &pint << std::endl;
    std::cout << "el tamanio de memoria de la variable: " << sizeof(number) << std::endl;
    return 0;
}