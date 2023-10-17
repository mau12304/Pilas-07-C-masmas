// Pilas 07 C++.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <vector>
#include<string>
//include "pilaleneal.h"

int main()
{
    const int capacidad = 10;
    std::vector<int>elementos(capacidad);
    int cima = -1;
    std::cout << "tecla elemento de la pila (termina con -1)\n";
    int x = 0;
    const int CLAVE = -1;
    while (x != CLAVE)
    {
        std::string entrada;
        std::cin >> entrada;
        try {
            x = std::stoi(entrada);//convertimos de cadena a entero
            if (cima < capacidad - 1) {
                cima++;
                elementos[cima] = x;

            }
            else {
                std::cout << "pila llena\n";
                break;
            }

        }
        catch (const std::invalid_argument&) {
            std::cout << "entrada no valida\n";
        }
    }
    if (cima >= 0) {
        //std::cout <<cima<<" ";
        std::cout << "elementos de la pila\n";
        while (cima >= 0) {
            x = elementos[cima];
            cima--;
            std::cout << x << " ";
        }
    }
    else {
        std::cout << "pila vacia\n";
    }

    return 0;
}
// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
