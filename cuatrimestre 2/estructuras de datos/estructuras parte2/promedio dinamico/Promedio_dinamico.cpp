#include "iostream"
#include "time.h"
#include "stdlib.h"

using namespace std;

int main()
{
	srand(time(NULL)); //Generar nuevos valores
	int tam; //Variable para el tamaño del
	int contador=0;
	int promedio=0;
	int suma=0;
	int reprobado=0;
	int aprobado=0;
	cout << "¿Cuantas calificaciones vas a capturar?";
	cin >> tam;
	
	//int calificaciones[tam];
	
	int* calificaciones=new int[tam];
	
	for(int i =0; i<tam; i++) //ciclo para llenar con valor aleatorio
	{
		calificaciones[i]=1+rand()%(10);
		contador++;
		if (calificaciones [i]<7)
		{
		   reprobado++;
		
		}
		else if(calificaciones [i]>=7)
		{
			aprobado++;
		}
		
	}
	
	for(int j=0; j<tam; j++)//ciclo para imprimir el arreglo
	{
		cout << "\nCalificacion" << j+1 << "=" << calificaciones[j];
		suma= suma+calificaciones[j];
	}
	cout << "\n\n";
	promedio= contador;
	
	cout<< "Numero de calificaciones ingresadas: "<< contador;
	cout << "\n\n";
	cout<< "Su promedio es: "<< suma/promedio;
	cout << "\n\n";
	cout<< "Usted reprobo: "<< reprobado<<" materias y aprobo: "<<aprobado;
	
	
	delete calificaciones; //liberar espacio de memoria
	cout << "\n\n";
	return 0;
}
