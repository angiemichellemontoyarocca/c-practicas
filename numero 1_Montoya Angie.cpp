/*Generar un arreglo de 10 n�meros enteros aleatorios distintos con
valores en un rango de 0 a 20.
Ejemplo de lo que debe imprimir:
19 12 0 18 1 6 14 9 16 3*/

//librerias
#include <iostream>
#include <time.h>
using namespace std;

int main() 
{
	//generador de n�meros aleatorios
    srand(time(NULL));

    int N[10], c = 1;   //arreglo  y contador
    N[0] = rand() % 20;  //generar y guardar el primer n�mero aleatorio

    //generar n�meros aleatorios hasta 10 elementos
    while (c < 10) 
	{
        int T = rand() % 20;  
        bool existe = false;  
        
        
        for (int i = 0; i < c; i++) 
		{
            if (N[i] == T) 
			{
                existe = true;  
                break;
            }
        }
        
        //si el n�mero no existe en el arreglo, agregarlo
        if (!existe) 
		{
            N[c++] = T;  
        }
    }

    //imprimir
    for (int i = 0; i < 10; i++) 
	{
        cout << N[i] << "\n";
    }

    return 0;
}



