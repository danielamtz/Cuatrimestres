#include <stdlib.h>
#include <time.h>
#include<iostream>

using namespace std;

int main()
{
	srand(time(NULL));//generar nuevos valores
	int contador=0, tam=0,aux;
	cout<<"Tamaño del vector? -->";
	cin>> tam;
	
	int* vector=new int[tam];//declarar un nuevo vector
	
	for(int i=0; i<tam; i++)//ciclo para asignar valores aleatorios entre 1 y 100
	{
		vector[i]=1+rand()%(100);
	}
	cout<<"VECTOR DESORDENADO";
	for(int i=0; i<tam; i++)//ciclo para imprimir vector Desordenado
	{
		cout<<"\nVector["<<i<<"]="<<vector[i];
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
	
	cout<<"\nVECTOR ORDENADO\n";
	
	for(int i=0; i<tam; i++)
	{
		cout<<"\nVector["<<i<<"]="<<vector[i];
	} 
	
	delete vector;
	return 0;
}
