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
	cout<< "\n";
}


void llenarVectorSeleccion()
{
	
	int numeros[] = {3,2,1,5,4};
	int i,j,aux,min;
	
	for(i=0; i<5; i++)
	{
		min = i;
		for(j=i+1; j<5; j++)
		{
			if(numeros[j] < numeros[min])
			{
				min = j;
			}
		}
		aux = numeros[i];
		numeros[i] = numeros[min];
		numeros[min] = aux;
	}
	
	cout<<"Orden ascendente: ";
	for(i=0; i<5; i++)
	{
		cout<<numeros[i]<<"";
	}
	
	cout<<"\nOrden Descendente: ";
	for(i=4; i>=0;i--)
	{
		cout<<numeros[i]<<"";
	}
	cout<<"\n";
	
}

int main (void){
	int contador,tam,aux,opcion;
	

do{

            cout<<"\n1. METODO BURBUJA ";
			cout<<"\n2. METODO SELECCION";
			cout<<"\n3.- Salir ";  
			cout<<("\n\nIngresa una opcion: ");
  			cin>> opcion;

  switch(opcion)
  {

   case 1:
    llenarVectorBurbuja(contador,tam,aux);
    break;
   case 2:
    llenarVectorSeleccion();
    break;
   case 3:
    break;
   
  }

 } while (opcion != 3);
 }




