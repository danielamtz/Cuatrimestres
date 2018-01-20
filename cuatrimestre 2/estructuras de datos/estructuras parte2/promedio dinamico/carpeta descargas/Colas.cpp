#include "iostream"
#define MAXIMO 5
using namespace std;
void insertar(int *cola, int n, int& ultimo)
{
	if(ultimo == MAXIMO)
	{
		cout<< "\n COLA LLENA \n";
		return;
		
	}
	else
	{
		cola[ultimo++]=n;
		cout<<"\n SE HA INSERTADO EL DATO: ";
		cout<<n;
	}
}
void eliminar(int *cola, int& ultimo)
{
	if (ultimo==0){
		cout<< "\ncola vacia\n";
		return;
	}
	else
	{
		ultimo=0;
		cout<<"\n se ha eliminado el numero: "<<cola[ultimo];
	}
}
void imprimir(int*cola, int ultimo)
	{
		cout<<"\n ultimo elemento ----> \n";
		for(int i = ultimo-1; i>=0; i --)
		
		{
			
			cout<<"		       "<<cola[i]<<" \n";
		}
		cout<< "\n primer elemento ----> \n";
		
	}
	int main(){
		int opcion,n,cola[MAXIMO],primero=0,ultimo=0;
		while(1){
			cout<<"COLAS";
			cout<<"\n\nMenu ";
			cout<<"\n1. Insertar ";
			cout<<"\n2. Eliminar";
			cout<<"\n3. Imprimir ";
			cout<<"\n4. Salir ";
			cout<<"\n\nSeleccionar una opcion: ";
			cin>>opcion;
			
	switch(opcion)
	{case 1:
		cout<<"\nIntroduce un numero: ";
		cin>>n;
		insertar(cola,n, ultimo);
		break;
	case 2:
		eliminar(cola,ultimo);
		break;
	case 3:
		imprimir(cola,ultimo);
		break;
	case 4:
		return 0;
	default:
		cout<<"\nSelecciones una opcion valida";
		break;
			}
			cout<<"\n\n";
			system("pause");
			system("cls");
			
		}
	}
	


