#include <iostream>

using namespace std;
//definir nodo con estructura
struct Node{
    int data;
    struct Node *next;
};
//prototipo de funciones
void Display(struct Node *);
int count(struct Node *);
void create(struct Node *&, int );
void reverseList(struct Node *&);
int validacionNumeros();
bool esPositivo(int);

int main()
{
    struct Node *first = NULL;
    int n;

    n = validacionNumeros();

    create(first, n);

    cout << "Lista original: ";
    Display(first);

    reverseList(first);

    cout << "\nLista invertida: ";
    Display(first);

    return 0;
}
//Función display
void Display(struct Node *p)
{
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
}
//Función contar
int count(struct Node *p)
{
    int count = 0;
    while (p != NULL)
    {
        count++;
        p = p->next;
    }
    return count;
}
//Funcion crear
void create(struct Node *&first, int n)
{
    int value;
    struct Node *t, *last;

    cout << "Ingrese " << n << " numeros enteros positivos:\n";

    for (int i = 0; i < n; i++)
    {
    	while(true){
    		cout<<"Numero: ";
    		cin >> value;
    		if(cin.fail()){
    			cin.clear();
    			cin.ignore(1000,'\n');
    			cout<<"Ingrese numero!!!"<<endl;
			}
			else{
				break;
			}
		}
        

        // Validar que sea un entero positivo
        while (!esPositivo(value))
        {
            cout << "Ingrese un número entero positivo:\n";
            cin >> value;
        }

        t = new Node;
        t->data = value;
        t->next = NULL;

        if (first == NULL)
        {
            first = t;
            last = t;
        }
        else
        {
            last->next = t;
            last = t;
        }
    }
}
//Función lista en reversa
void reverseList(struct Node *&first)
{
    struct Node *q = NULL, *r = NULL;

    while (first != NULL)
    {
        r = q;
        q = first;
        first = first->next;
        q->next = r;
    }

    first = q;
}
//función validar
int validacionNumeros(){
	int numero;
    while(true){
        cout << "Ingrese cantidad de numeros (mayor a 5): ";
        cin >> numero;

        if(cin.fail()){
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Ingrese numeros!!!" << endl;
        } 
		else if(numero<5){
			cin.clear();
            cin.ignore(1000, '\n');
            cout << "Ingrese numeros mayores a 5" << endl;
		}
		else {
            return numero;
        }
    }
}
//función para validar si es entero positivo
bool esPositivo(int value)
{
    return value > 0;
}
