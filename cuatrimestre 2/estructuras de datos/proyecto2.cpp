#include "iostream"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

#define NUM_ELEMENTOS 4
#define TAM_PRECIO 30

typedef struct{
	int matricula;
	int r,c,t[TAM_PRECIO];
	int B,P,H [TAM_PRECIO];
}objetos;
typedef objetos TipoElemento;

typedef int posicion;
typedef struct{
	TipoElemento elementos[NUM_ELEMENTOS];
	posicion ult;
}Lista;

int Posicion;
objetos refresco;
objetos cafe ;
objetos te ;
Lista MiLista;

void inicializador()
{
	int m1,m2,m3;
	char n1[TAM_NOMBRE],n2[TAM_NOMBRE],n3[TAM_NOMBRE];
	cout<< "ingresa la matricula alumno 1: ";
	cin>> m1;
	cout<< "ingresa el nombre: ";
	cin>> n1;
	
	cout<< "ingresa la matricula alumno dos: ";
	cin>> m2;
	cout<< "ingresa el nombre: ";
	cin>> n2;
	
	cout<< "ingresa la matricula de alumno tres: ";
	cin>> m3;
	cout<< "ingresa el nombre: ";
	cin>>n3;
	
	Integrante1.matricula=m1;
	strcpy(Integrante1.nombre,n1);
	Integrante2.matricula=m2;
	strcpy(Integrante2.nombre,n2);
	Integrante3.matricula=m3;
	strcpy(Integrante3.nombre,n3);
	MiLista.elementos[0]= Integrante1;
	MiLista.elementos[1]= Integrante2;
	MiLista.elementos[2]= Integrante3;
	
}

void imprimirLista()
{
	for(int i=0; i<=NUM_ELEMENTOS-1; i++){
		cout << "Alumno " <<i; 
		cout << "\n" "Matricula: " << MiLista.elementos[i].matricula;
		cout << "\n" "Nombre: " << MiLista.elementos[i].nombre;
		cout << "\n";
		
		
	}
}

int main ()
{
	inicializador();
	imprimirLista();
	
	return 0;
	
}

