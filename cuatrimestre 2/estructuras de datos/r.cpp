#include <iostream>

using namespace std;

void main()
{
clrscr();
int Ni,Nf;
int i;
 cout<<"Ingrese Numero Inicial:";
 cin>>Ni;
 cout<<"Ingrese Numero Final:";
 cin>>Nf;
 for (i=Ni+1;i<Nf;i++)
  {
      cout<<" \a"<<endl<<i;
      }
getch();
}
