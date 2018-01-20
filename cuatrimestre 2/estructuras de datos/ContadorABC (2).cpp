#include <iostream>
#include <string.h>
#include<stdio.h> 
#define TAM 70
using namespace std;

int main() {
	 
   int K, r,c,t,contador=0;
    int B=0, P=0, H=0;
      	char precios[64];
   	int R=0,C=0,T=0;
   	float TOTAL=0, TOTAL2=0, TOTAL3=0, suma=0, suma2=0, resta=0;
	 char insumo [64];
   cin >> K;
   for (int i = 0; i <K; ++i)
   {
   	
      cin >> r>> c>>t; 
      fflush(stdin); 
      gets (precios);
      fflush(stdin); 
      gets (insumo);
      fflush(stdin); 
      
      cout<< "\n\n";
      float porcR,porcC,porcT;
      porcR= r*.20;
      porcC= c*.30;
      porcT= t*.40;
      
      float ins1,ins2,ins3;
      ins1= 1;
      ins2= 2;
      ins3= 1.5;
     
      for (int j = 0; j <precios [i]; ++j){
	 
      if (precios[j]=='R')
	  {
	  	
	  	R ++;
	  	TOTAL= R*porcR;
	  }
	   
      else if (precios[j]=='C')
	  {
	  	
	  	C ++;
	  	TOTAL2= C*porcC;
	  	
	  }
	   
      else if (precios[j]=='T')
	  {
	  	
      
	  	T=T+1;
	  	TOTAL3= T*porcT;
	  	
      
	  	
	  }
	    
	  
	  
	  
}
for (int q = 0; q <insumo [i]; ++q){
	
	 if (insumo[q]=='B')
	  {
	  	
	  	B ++;
	  	ins1= B*1;
	  }
	  if (insumo[q]=='P')
	  {
	  	
	  	P ++;
	  	ins2= P*2;
	  	
	  	
	  	
	  }
	  
	  if (insumo[q]=='H')
	  {
	  	
	  	H ++;
	  	ins3= H*1.5;
	  }
	
	
	
	
	
}       
     
   
   
      cout<<"rrr: "<< R;
      cout<< "\n";
      cout<<TOTAL;
      cout<< "\n\n";
      cout<< "CCCA: "<< C;
      cout<< "\n";
      cout<<TOTAL2;
      cout<< "\n\n";
      cout<< "TTT: "<< T;
      cout<< "\n";
      cout<<TOTAL3;
      cout<< "\n";
      cout<< ins1;
      cout<< "\n";
      cout<< "P: ";
      cout<< ins2;
      cout<< "\n";
      cout<< "H: "<<ins3;
      suma= TOTAL+TOTAL2+TOTAL3;
      suma2= ins1+ins2+ins3;
      cout<< "\n";
      cout<< "suma: "<<suma;
      cout<< "\n";
      cout<< "suma insumos: "<<suma2;
      resta= suma-suma2;
        cout<< "\n\n";
      if(resta>0){
      	cout<< "GANADO";
      	cout<< "\n";
      	cout<< resta;
	  }
	  else{
	  	cout<< "PERDIDO";
	  	cout<< "\n";
	  	cout<< resta;
	  }
      cout<< "\n\n";
      
      R=0;
      C=0;
      T=0;
      B=0;
      P=0;
      H=0;
      
   
      
   }
   
  
        
 
   
}
