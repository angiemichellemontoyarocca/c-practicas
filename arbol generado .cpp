/*Crear un arreglo de 10 números enteros generados de manera aleatoria en un rango de 1
a 100, encontrar el segundo mayor valor del arreglo
Nota1: No ordenar los datos*/
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    const int tamano = 10;
    int arreglo[tamano];

    //generar números aleatorios
    srand(time(0));

    // Llenar el arreglo con números aleatorios en el rango de 1 a 100
    for (int i = 0; i < tamano; i++) {
        arreglo[i] = rand() % 100 + 1;
    }

    // Encontrar el mayor y el segundo mayor valor en el arreglo
    int mayor = arreglo[0];
    int segundoMayor = arreglo[0];

    for (int i = 1; i < tamano; i++) {
        if (arreglo[i] > mayor) {
            segundoMayor = mayor;
            mayor = arreglo[i];
        } else if (arreglo[i] > segundoMayor && arreglo[i] != mayor) {
            segundoMayor = arreglo[i];
        }
    }

    // Mostrar el arreglo
    cout << "Arreglo generado:" << endl;
    for (int i = 0; i < tamano; i++) {
        cout << arreglo[i] << " ";
    }

    cout << "\nEl segundo mayor valor en el arreglo es: " << segundoMayor << endl;

    return 0;
}

