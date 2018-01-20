
#include "iostream"
#include "time.h"
#include "stdlib.h"

using namespace std;

 
int main()
{
	int n=0,suma=0, suma2=0;
cin>> n;
if (n<10000){
for (int i=1;i<n;i++)
{
	
	suma+=i;
	suma2= suma+n;
	
}
cout<< suma2;

}
return 0;
}
