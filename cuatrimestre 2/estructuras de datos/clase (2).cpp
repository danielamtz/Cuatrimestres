# include "iostream"
#include "string"
using namespace std;
//declaracion de la clase
class Alumno 
{private:
	string nombre;
    string apellido;
    bool acreditado;
 public:
    Alumno(string,string,bool=true);
    void mostrar_info(); 
    void set_nombre(string);
};
//impleentcion de la clase 
Alumno::Alumno(string nom, string ape, bool acr)
{nombre=nom;
apellido=ape;
acreditado=acr;
}

void Alumno ::mostrar_info()
{
    cout<<apellido<<","<<nombre;
    cout<<"\nacreditado:"<<acreditado<<"\n\n";
}

void Alumno :: set_nombre(string nom)
{
	nombre=nom;
	return;
}

int main ()
{
int opcion, salir=0;
string nom, ape;
cout<<"Datos iniciales del alumno";
cout<<"\n NOMBRE: ";
cin>>nom;
cout<<"\n APELLIDO: ";
cin>>ape;

Alumno Alumno_1=Alumno(nom,ape);

while(salir==0){
	system("cls");
	cout<<"MENU";
	cout<<"\n [1] Actualizar registro";
	cout<<"\n [2] Mostrar Registro";
	cout<<"\n [3] Salir";
	cout<<"\n Selecciona una opcion";
	cin>>opcion;
	switch (opcion)
	{
		case 1:
			cout<< "Ingresa el nuevo nombre: ";
			cin>> nom;
			Alumno_1.set_nombre(nom);
			break;
		case 2:
			system("cls");
			cout<<"DATOS ALUMNO"<<endl;
			Alumno_1.mostrar_info();
			system("pause");
			break;
		case 3:
			salir=1;
			break;
	}
	
}

system("pause");
return 0;
}
