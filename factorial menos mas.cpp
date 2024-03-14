/*Escriba un programa que pregunte un número entero mayor que 3, y que me muestre en
texto la operación realizada.
Ejemplo:
n = 5
1! - 2! + 3! - 4! + 5! = 101
Nota1: Debe partir del número 1, debe usar secuencia(s) for.
Nota2: Considerar que los signos estén intercalados.*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese un numero entero mayor que 3: ";
    cin >> n;

    if (n <= 3) {
        cout << "El numero ingresado no es mayor que 3." << endl;
        return 1;
    }

    int resultado = 0;
    bool sumar = true;

    for (int i = 1; i <= n; i++) {
        int factorial = 1;
        for (int j = 1; j <= i; j++) {
            factorial *= j;
        }

        if (sumar) {
            resultado += factorial;
            sumar = false;
        } else {
            resultado -= factorial;
            sumar = true;
        }
    }

    sumar = true;

    for (int i = 1; i <= n; i++) {
        if (sumar) {
            cout <<"+ " << i << "! ";
        } else {
            cout << "- " << i << "! ";
        }
        sumar = !sumar;
    }

    cout << "= " << resultado << endl;

    return 0;
}

