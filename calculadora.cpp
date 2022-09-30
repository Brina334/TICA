//Programa que presenta las operaciones básicas
//Creado por stalin franci
// modificado SABRINA GODOY 
//Fecha:29 -09-2022

#include<iostream>
using namespace std;

int main()
{
	float sgx,sgy,sgs,sgm,sgd,sgr;
	//Ingreso de datos
	cout<<"Ingrese en valor de sgx=:";
	cin>>sgx;
	cout<<"Ingrese en valor de sgy=:";
	//Operaciones 
	cin>>sgy;
	sgs=sgx+sgy;
	sgm=sgx*sgy;
	sgd=sgx/sgy;
	sgr=sgx-sgy;
	//Muestra los resutaldos.
	cout<<"Las suma de "<<sgx<<" + "<<sgy<<" = "<<sgs<<endl;
	cout<<"Las multiplicacion de "<<sgx<<" * "<<sgy<<" = "<<sgm<<endl;
	cout<<"Las division de "<<sgx<<" / "<<sgy<<" = "<<sgd<<endl;
	cout<<"Las resta de "<<sgx<<" - "<<sgy<<" = "<<sgr<<endl;
	return 0 ;

}
