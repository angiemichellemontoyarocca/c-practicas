/*2. Si tengo en un arreglo 20 números enteros aleatorios en un rango de 0
a 10. Mostrar el índice de los números que son repetidos exactamente 3
veces, de no haber repetidos exactamente 3 números iguales reportar
"no hay 3 repetidos".
Ejemplo:
4 - 2 - 2 - 7 - 3 - 2 - 1 - 3 - 1 - 4 - 10 - 7 - 1 - 8 - 3 - 5 - 8 - 7 - 2
- 9 -
Veces: R:7 R:3 R:1*/

#include <iostream>
#include <time.h>
using namespace std;

int main() {
    rand(time(NULL));  
	//arreglo
    int N[20];


    for (int i = 0; i < 20; i++) 
	{
        N[i] = 1 + rand() % 10; 
        cout << N[i] << " - ";
    }
    cout << endl << "Cantidad: ";

    for (int i = 0; i < 20; i++) 
	{
        if (N[i] > 0) 
		{
            int cantidad = 1;  
            int R = N[i];   
            N[i] = -1;    


            for (int j = i + 1; j < 20; j++) 
			{
                if (N[j] == R) {
                    cantidad = cantidad + 1; 
                    N[j] = -1;      
                }
            }


            if (cantidad == 3) 
			{
                cout << "R:" << R << " ";
            }
        }
    }

    return 0;
}

