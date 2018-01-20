#include "iostream"
#define MAXIMO 5

using namespace std;

void insertar(int *cola, int n, int& ultimo)
{
	if(n == MAXIMO)
	{
		cout << "\nCOLA LLENA\n";
		return; 
	}
	else
	{
		cola[ultimo++];
		cout << "\nSe ha ingresado el dato";
	}
}

void eliminar(int *cola, int& primero, int ultimo)
{
	if(ultimo == 0)
	{
		cout << "\nCOLA VACIA\n";
		return;
	}
	else
	{
		ultimo = 0
		cola[ultimo++];
		cout << "\nSe ha eliminado el dato";
	}
	
	
}

void imprimir (int*cola, int ultimo)
	{
	cout<< "\nUltimo elemento -->";
	for(int i=ultimo; i>=0;i--)
	{
	
	cout<< cola[i]<<" ";
	}
	
	cout<< "Primer elemento--<<\n"
	}
int main()
(
	int opcion,n,cola[MAXIMO],primero=0,ultimo=0;
	while(1)
	{
		cout<< "COLAS";
		cout<<"\n\MENU";
		cout<<"\n1.Insertar";
		cout<<"\n2.eliminar";
		cout<<"\n3.Imprimir";
		cout<<"\n4.Salir";
		cout<<"\n\nSelecciona una opcion: ";
		cin>> opcion;
		
		switch (ocpion)
		{
			case 1:
				cout<<"\nIntroduce un numero: ";
				cin>>n;
				insertar(cola,primero,ultimo);
				break
			case 2:
				eliminar(cola,primero,ultimo);
				break;
			case 3:
				imprimir(cola,ultimo);
				break
			case 4:
				return 0;
			default:
				cout<<"\nSelecciona una opcion valida....";
				break
			
			
		}
		
		cout<< "\n\n";
		system("pause");
		system("cls");
		
		
		
	}

)
