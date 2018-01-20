#include "iostream"
using namespace std;
int MAXIMO=1;
void insertar(int *cola, int n, int& ultimo)
{
	if(ultimo == MAXIMO)
	{
		cout<< "\n Cola llena \n";
		return;
		
	}
	else
	{
		cola[ultimo++]=n;
		cout<<"\n se ha introducido el dato\n";
		cout<<n;
	}
}
void eliminar(int *cola,int& primero, int& ultimo)
{
	if (primero==ultimo){
		cout<< "\ncola vacia\n";
		return;
	}
	else
	{
		cout<<"\nEl dato eliminado fue: " << cola[primero]<< " \n\n";
		for(int i=0; i<ultimo; i++)
		{
			cola[i]=cola[i+1];
		}
		ultimo--;
	}
}
void imprimir(int*cola, int ultimo)
	{
		cout<<"\n ultimo elemento ----> \n";
		for(int i = ultimo-1; i>=0; i--)
		{
			cout<<"		       "<<cola[i]<<" \n";
		}
		cout<< "\n primer elemento ----> \n";
		
	}
void vaciar(int*cola, int& ultimo)
{
	if (ultimo==0){
		cout<<"\nCola Vacia\n";
		return;
	}
	else
	{
		ultimo=0;
		cout<<"\nSe ha Vaciado: ";
	}
}
	int main(){
		cout<<"Cuantos numeros: ";
		cin>>MAXIMO;
		int opcion,n,cola[MAXIMO],primero=0,ultimo=0;
		while(1){
			cout<<"COLAS";
			cout<<"\n\nMenu ";
			cout<<"\n1. Insertar ";
			cout<<"\n2. Eliminar";
			cout<<"\n3. Imprimir ";
			cout<<"\n4.- Vaciar";
			cout<<"\n5.- Salir ";
			cout<<"\n\nSeleccionar una opcion: ";
			cin>>opcion;
			
	switch(opcion)
	{case 1:
		cout<<"\nIntroduce un numero: ";
		cin>>n;
		insertar(cola,n,ultimo);
		break;
	case 2:
		eliminar(cola,primero,ultimo);
		break;
	case 3:
		imprimir(cola,ultimo);
		break;
	case 4:
		vaciar(cola,ultimo);
		break;
	case 5:
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
	


