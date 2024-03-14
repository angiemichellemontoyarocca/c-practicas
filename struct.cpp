#include <iostream>
using namespace std;
typedef struct{
	char sexo;
	int dia;
	int mes;
	int ano;
}tPersona;
int main(int argc, char** argv) {
	int temp=0;
	tPersona *Vdatos;
	Vdatos = new tPersona[3];
	for(int i = 0;i<3;i++)
	{
		cout<<"Persona "<<(i+1)<<endl;
		cout<<"Sexo: ";cin>>Vdatos[i].sexo;
		cout<<"Dia: ";cin>>Vdatos[i].dia;
		cout<<"Mes: ";cin>>Vdatos[i].mes;
		cout<<"Año: ";cin>>Vdatos[i].ano;
	}
	do
	{
		cout<<"Que mes desea encontrar?";cin>>temp;
		for(int i=0;i<3;++i)
		{
			if(temp==Vdatos[i].mes)
			{
				cout<<"Persona "<<(i+1)<<endl;
				cout<<"Sexo: "<<Vdatos[i].sexo;
				cout<<"Dia: "<<Vdatos[i].dia;
				cout<<"Mes: "<<Vdatos[i].mes;
				cout<<"Año: "<<Vdatos[i].ano;
			}
		}
	} while(temp!=0);

return 0;
}
