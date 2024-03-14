#include<iostream>
#include<conio.h>
using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;
};
//prototipo de funciones
void insertarLista(Nodo *&, int);
void imprimirLista(Nodo *);
void sumarLista(Nodo *);
int validarNumero(int);
void menu();

int main(){
	menu();
	getch();
	return 0;
}
//función menú
void menu(){
	Nodo *lista = NULL;
	int opc = 0;
	int dato = 0;
	int datito = 0;
	do {
		system("cls");
        cout << "----- Menu -----" << endl;
        cout << "1. Insertar numeros" << endl;
        cout << "2. Imprimir lista" << endl;
        cout << "3. Calcular suma" << endl;
        cout << "4. Salir" << endl;
        cout << "Ingrese su opcion: ";
        cin >> opc;

        switch (opc) {
            case 1: system("cls");
					cout << "Ingrese un numero entero: ";
                	cin >> dato;
                	datito = validarNumero(dato);
                	insertarLista(lista, datito);
                	system("pause");
                	break;
            case 2: system("cls");
                	imprimirLista(lista);
                	system("pause");
                	break;
            case 3: system("cls");
					sumarLista(lista);
					system("pause");
                	break;
            case 4: cout<<"Salir"<<endl;
                	break;
            default:
                	cout << "Ingrese opcion correcta!!!" << endl;
        }

    } while (opc != 4);
}

//funcion insertar numeros a la lista
void insertarLista(Nodo *&lista, int n){
    Nodo *nuevoNodo = new Nodo();
    nuevoNodo->dato = n;

    Nodo *aux1 = lista; 
    Nodo *aux2 = NULL; 

    while((aux1 != NULL) && (n > aux1->dato)){ 
        aux2 = aux1;
        aux1 = aux1->siguiente;
    }

    if(aux2 == NULL){ 
        lista = nuevoNodo;
    }
    else{
        aux2->siguiente = nuevoNodo;
    }
    nuevoNodo->siguiente = aux1;
}
//función imprimir lista
void imprimirLista(Nodo *lista){
	if(lista != NULL){
		while(lista != NULL){
        cout << lista->dato << " ";
        lista = lista->siguiente;
    	}
    	cout << endl;
	}	
	else{
		cout<<"Lista vacia..."<<endl;
	}
    
}
//funcion realizar suma
void sumarLista(Nodo *lista){
    int suma = 0;
    if(lista!=NULL){
    	while(lista != NULL){
	        suma += lista->dato;
	        lista = lista->siguiente;
    	}
    	cout<<"La suma de la lista es de: "<<suma<<endl;
	}else{
		cout<<"Lista vacia..."<<endl;
	}    
}
//funcion validar
int validarNumero(int dato){
    int n;
    while(true){
        cout << "Ingrese un numero entero: ";
        cin >> n;

        if(cin.fail()){
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Ingrese numeros!!!" << endl;
        } else {
            return n;
        }
    }
}
