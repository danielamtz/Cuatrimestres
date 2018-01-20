#include <stdlib.h>
#include <time.h>
#include<iostream>

using namespace std;
int* vector;

	void llenarVectorBurbuja( int contador, int tam, int aux)
{
	
	srand(time(NULL));
	
	cout<<"Tamaño del vector Burbuja -->";
	cin>> tam;

	int* vector=new int[tam];
	cout<<"\n";
	cout<<"VECTOR DESORDENADO\n";
	for(int i=0; i<tam; i++)
	{
		vector[i]=1+rand()%(100);
		cout<<"\nVector["<<i+1<<"]="<<vector[i];
	}
		for(int i=0; i<tam; i++)
	{
		for(int j=i+1; j<tam; j++)
		{
			if(vector[i]>vector[j])
			{
				aux=vector[i];
				vector[i]=vector[j];
				vector[j]=aux;
			}
		}	
	}
	cout<<"\n";
	cout<<"\nVECTOR ORDENADO\n";
	
	for(int i=0; i<tam; i++)
	{
		cout<<"\nVector["<<i<<"]="<<vector[i];
	} 
}

void llenarVectorInsercion()
{
	
	
		int n,aux;
		cout<<"Numero de elementos del arreglo: ";
		cin>>n;
		int num[n];
		for(int i=0; i<n; i++)
		{
			cout<<"\n"<<i+1<<".-Ingrese el numero : ";
			cin>>num[i];
		}
		
cout<<"Numeros ordenados de menor a mayor\n";

	for(int i=0; i<n; i++)
		{
		cout<<" [ "<<num[i]<<" ] ";	
		}
	int i,k;
	
	for(i=0; i<=n-1; i++)
	{
		
		aux=num[i];
		k=i-1;
		while((k>=0) && (aux<num[k]))
		{
			num[k+1]=num[k];
			k=k-1;
		}
		num[k+1]=aux;
		
	}
}

int main (void){
	int contador,tam,aux,opcion;
	

do{

            cout<<"\n1. METODO BURBUJA ";
			cout<<"\n2. METODO INSERCION";
			cout<<"\n3.- Salir ";  
			cout<<("\n\nIngresa una opcion: ");
  			cin>> opcion;

  switch(opcion)
  {

   case 1:
    llenarVectorBurbuja(contador,tam,aux);
    break;
   case 2:
    llenarVectorInsercion();
    break;
   case 3:
    break;
   
  }

 } while (opcion != 3);
 }




