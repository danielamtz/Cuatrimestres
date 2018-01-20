#include "iostream"
#include <conio.h>
#include <stdio.h>
#include "iostream"

using namespace std;


/*
PSEUDOCODIGO
Apilar

sub_programa apilar(pila, tope, dato)
if tope = n then
pila_llena
else
tope = tope + 1
pila(tope) = dato
end(if)
fin(apilar)
*/


void Apilar (int *pila, int dato, int& tope, int x)
{ 

	if(tope == x)
	{
		cout<<"\n PILA ESTA LLENA \n";
		return;
	}
	pila[tope++]=dato;
	cout<< "Dato apilador -->" << dato << "\n\n";
}
/* PSEUDOCODIGO
Desapilar
sub_programa desapilar(pila, tope)
if tope = 0 then
pila_vacia
else
dato = pila(tope)
tope = tope - 1
end if(
end(sub_programa)*/

void Desapilar(int *pila, int&tope)
{
	if(tope == 0)
	{
		cout<< "PILA VACIA \n";
		return;
	}
	cout<< "\n el dato desapilado fue: " << pila[--tope]<< "\n\n";
}

void Imprimir(int *pila, int tope)
{
	cout<<"PILA \n\n";
	for(int i = tope - 1;i >=0;i--)
	{
		cout<<"|" <<pila[i]<< "|\n";
	}
	cout << "-------\n";
}
     
int main ()
{

	int opcion, n, tope=0, x;
	cout<<"Tamano";
	cin>> x;
	int pila[x];
	
	while(1)
	{
		cout << " <<PILAS>>";
		cout << "\n1. Apilar";
		cout << "\n2. Desapilar";
		cout << "\n3. Imprimir";
		cout << "\n4. Salir";
		cout << "\n\n Selecciona una opcion: ";
		cin >> opcion;
		
		switch(opcion)
		{
			case 1:
				cout << "\nNumero a introducir: ";
				cin >> n;
				
				Apilar(pila, n, tope,x);
				break;
			case 2:
				Desapilar(pila,tope);
				break;
			case 3:
				Imprimir(pila, tope);
				break;
			case 4:
				return 0;
			default:
				cout << "Seleccione una opcion valida...\n";
		}
		system("pause");
		system("cls");
	}
}
