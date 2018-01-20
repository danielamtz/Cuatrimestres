#include <iostream>

using namespace std;
int end1;
void Imprimir(int a[], int n)
{
	cout<<"Numeros ordenados de menor a mayor"<<end1;
	
	for(int i=0; i<n; i++)
		{
		cout<<" "<<a[i]<<" ";	
		}
}

void Insercion_Directa(int a[] , int n)
{
	int i,k,aux;
	
	for(i=0; i<=n-1; i++)
	{
		
		aux=a[i];
		k=i-1;
		while((k>=0) && (aux<a[k]))
		{
			a[k+1]=a[k];
			k=k-1;
		}
		a[k+1]=aux;
		
	}
}

int main()
{
	
		int n;
		cout<<"Numero de elementos del arreglo"<<end1;
		cin>>n;
		int num[n];
		for(int i=0; i<n; i++)
		{
			cout<<"Ingrese el numero "<<(i+1)<<end1;
			cin>>num[i];
		}
		Insercion_Directa(num, n);
		Imprimir(num,n);

	
	
	return 0;
}
