//Creado por stalin franci
// modificado SABRINA GODOY
//Fecha:29 -09-2022
#include<iostream>
using namespace std;
int main()
{
	int sgi=0,sgl;
	float sgx,sgs=0;
	cout<<"ingrese el limite l="; cin>>sgl;
	do{
		
	cout<<"ingrese el numero x="; cin>>sgx;
	sgi=sgi+1;
	sgs=sgs+sgx;



	}while(sgi<sgl);
	cout<<"Se ingresaron "<<sgl<<" numeros "<< "que sumaron "<<sgs<<endl;
	return 0;



}
