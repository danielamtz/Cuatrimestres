#include <stdio.h>
#include <stdlib.h>

#define FALSE 0
#define TRUE 1

typedef int boolean;

boolean estaVacia();

typedef struct nodo{
 int llave;
 struct nodo * sig; /* auto referencia */
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
  scanf("%d", &opcion);

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

 printf("\n\nIngresa el numero: ");
 scanf("%d", &nuevo->llave);
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

 printf("\n\nIngresa el numero: ");
 scanf("%d", &nuevo->llave);
 nuevo->sig = NULL;
 ultimo->sig = nuevo;
 ultimo = nuevo;
}

void mostrarLista(){
 if (estaVacia()){
  printf("\n\n LA LISTA ESTA VACIA");
  return;
 }
 nodoLista * recorre = primero;
 while (recorre != NULL){
  printf("%d  ", recorre->llave);
  recorre = recorre->sig;
 }
}

void eliminarLista(){
 nodoLista* anterior;
 nodoLista* actual;
 nodoLista* siguiente;
 nodoLista* recorre=primero;

 int op;
 printf("Ingrese el numero que desea eliminar: ");
 scanf("%d", &op);
 printf("Se ha eliminado el dato: ", op);

 anterior=primero;
 actual=primero;
 siguiente=primero->sig;

 while(recorre != NULL){

  if(recorre->llave == op){
   anterior->sig=siguiente;
   free(actual);
  }
  else{}
  anterior=recorre;
  recorre = recorre->sig;
  actual=recorre;
  if(recorre != NULL){siguiente = recorre->sig;}
 }
}

boolean estaVacia(){
 if (primero == NULL)
  return TRUE;
 else
  return FALSE;
}
