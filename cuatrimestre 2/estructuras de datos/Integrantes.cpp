#include "iostream"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

#define NUM_ELEMENTOS 3
#define TAM_NOMBRE 30

typedef struct {
	int matricula;
	char nombre[TAM_NOMBRE];
}Alumno;
typedef Alumno TipoElemento;

typedef int posicion;
typedef struct{
	TipoElemento elementos[NUM_ELEMENTOS];
	posicion ult;
}Lista;

int Posicion;
Alumno Integrante1;
Alumno Integrante2;
Alumno Integrante3;
Lista MiLista;

void inicializador()
{
	int matricula1, matricula2, matricula3;
	char Alumno1[TAM_NOMBRE], Alumno2[TAM_NOMBRE], Alumno3[TAM_NOMBRE];
	cout << "Ingresa la matricula del integrante 1: ";
	cin >> matricula1;
	cout << "Ingresa el nombre del integrante 1: ";
	cin >> Alumno1;
	cout << "Ingresa la matricula del integrante 2: ";
	cin >> matricula2;
	cout << "Ingresa el nombre del integrante 2: ";
	cin >> Alumno2;
	cout << "Ingresa la matricula del integrante3: ";
	cin >> matricula3;
	cout << "Ingresa el nombre del integrante 3: ";
	cin >> Alumno3;
	Integrante1.matricula=matricula1;
	strcpy(Integrante1.nombre,Alumno1);
	Integrante2.matricula=matricula2;
	strcpy(Integrante2.nombre,Alumno2);
	Integrante3.matricula=matricula3;
	strcpy(Integrante3.nombre,Alumno3);
	
	MiLista.elementos[0]=Integrante1;
	MiLista.elementos[1]=Integrante2;
	MiLista.elementos[2]=Integrante3;
}

void imprimirLista()
{
	for(int i=0; i<=NUM_ELEMENTOS-1;i++){
		cout<< "Elemento " <<i;
		cout<< "Matricula: " << MiLista.elementos[i].matricula;
		cout<< "Nombre: " << MiLista.elementos[i].nombre;
		cout<< "\n";
	}
}

int main()
{
	inicializador();
	imprimirLista();
	
	return 0;
}
