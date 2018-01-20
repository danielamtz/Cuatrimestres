#include <stdio.h>
#include <stdlib.h>

using namespace std;
#include "iostream"
#define FALSE 0
#define TRUE 1

typedef int boolean;

boolean estaVacia();

typedef struct nodo{
 int llave;
 struct nodo * sig; 
}nodoLista;

nodoLista * primero = NULL;
nodoLista * ultimo = NULL;

void insertarInicio();
void insertarFinal();
void mostrarLista();
void eliminarLista();

int main(void) {
 setvbuf(stdout, NULL, _IONBF, 0);
 int opcion;
 do{
  printf("\n\nMENU");
  printf("\n1.- Agregar numero al principio");
  printf("\n2.- Agregar numero al final");
  printf("\n3.- eliminar un numero");
  printf("\n4.- Mostrar elementos");
  printf("\n5.- salir");

  printf("\n\nIngresa una opcion: ");
  cin>> opcion;

  switch(opcion){
   case 0:
    break;
   case 1:
    insertarInicio();
    break;
   case 2:
    insertarFinal();
    break;
   case 3:
    eliminarLista();
    break;
   case 4:
    mostrarLista();
    break;
   case 5:
	break;
   
  }

 } while (opcion != 5);


 return 0;
}

void insertarInicio(){
 nodoLista * nuevo;
 nuevo = (nodoLista *)malloc(sizeof(nodoLista));

 cout<< "\n\nIngresa el numero: ";
 cin>> nuevo->llave;
 nuevo->sig = primero;
 primero = nuevo;

 if(primero->sig == NULL)
  ultimo = primero;
}

void insertarFinal(){
 if (estaVacia()){
  insertarInicio();
  return;
 }

 nodoLista * nuevo;
 nuevo = (nodoLista *)malloc(sizeof(nodoLista));

 cout<< "\n\nIngresa el numero: ";
 cin>> nuevo->llave;
 nuevo->sig = NULL;
 ultimo->sig = nuevo;
 ultimo = nuevo;
}

void mostrarLista(){
 if (estaVacia()){
  cout<<"\n\n LA LISTA ESTA VACIA";
  return;
 }
 nodoLista * recorre = primero;
 while (recorre != NULL){
  cout<< recorre->llave;
  recorre = recorre->sig;
 }
}

void eliminarLista(){
 nodoLista* anterior;
 nodoLista* actual;
 nodoLista* siguiente;
 nodoLista* recorre=primero;

 int num;
 cout<< "Ingrese el numero que desea eliminar: ";
 cin>> num;
 cout<< "Se ha eliminado el dato: ", num;

 anterior=primero;
 actual=primero;
 siguiente=primero->sig;

 while(recorre != NULL){

  if(recorre->llave == num){
   anterior->sig=siguiente;
   free(actual);
  }
  else{}
  anterior=recorre;
  recorre = recorre->sig;
  actual=recorre;
  if(recorre != NULL){siguiente = recorre->sig;}
 }
 return;
}

boolean estaVacia(){
 if (primero == NULL)
  return TRUE;
 else
  return FALSE;
}
