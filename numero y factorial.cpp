#include<iostream>
#include<stdlib.h>
#include<ctime>

using namespace std;

// Prototipo de funciones
long double calcuFactorial(int);
bool validarCaracter(char);

int main() {
    int numero = 0;
    long double facto = 0;
    char rpta = ' ';
    bool bandera = false;
    srand(time(0));

    do {
        system("cls");
        cout << "Imprimir el numero y su factorial: " << endl;
        cout << "Dato  Numero         Factorial" << endl;
        cout << "----  ----------  -------------------" << endl;

        for (int i = 0; i < 10; i++) {
            numero = rand() % 500 + 1;
            facto = calcuFactorial(numero);
            cout << i + 1 << "     " << numero << "          " << facto << endl;
        }

        cout << "Desea calcular otro Factorial S o N: ";
        cin >> rpta;
        bandera = validarCaracter(rpta);
        if (rpta == 'S' || rpta == 's') {
            cout << "Ingrese un número para calcular su factorial: ";
            cin >> numero;
            facto = calcuFactorial(numero);
            cout << "El factorial de " << numero << " es: " << facto << endl;
        }
    } while (rpta == 'S' || rpta == 's' && bandera);

    return 0;
}

// Función para calcular factorial
long double calcuFactorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * calcuFactorial(n - 1);
    }
}

// Función para validar caracter
bool validarCaracter(char rpt) {
    if (cin.fail()) {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Entrada inválida. Introduzca un carácter válido." << endl;
        return false;
    } else {
        return true;
    }
}

