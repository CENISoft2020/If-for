#include <iostream>

using namespace std;

int main() {

//  (a + b/c )/ (d + e/f)

	//#definicion de numeros
	
	float a,b,c,d,e,f, resultado = 0 , VX = 0, VY = 0, VZ = 0;
	
	
	cout<<"Hackers Digita el valor de ( a ):";
	cin>>a;//ingreso de valor
	
	cout<<"\n Hackers Digita el valor de ( b ):";
	cin>>b;//ingreso de valor

	cout<<"Hackers Digita el valor de ( c ):";
	cin>>c;//ingreso de valor

	cout<<"Hackers Digita el valor de ( d ):";
	cin>>d;//ingreso de valor

	cout<<"Hackers Digita el valor de ( e ):";
	cin>>e;//ingreso de valor

	cout<<"Hackers Digita el valor de ( f ):";
	cin>>f;//ingreso de valor

//  (a + b/c )/ (d + e/f) formula a aplicar

	resultado = ((a + b/c)/(d + e/f));
	
	cout<<"el resultado de la ecuacion es:"<<resultado;

//----- nuevo resultado con nueva formula	( con cambio de varible )
	
	VX = resultado;
	VY = (VX + 100)/2;
	VZ = (VY + 200)/3;
	
	resultado = VY;

    cout<<"\n El Nuevo resultado de la ecuacion es:"<<resultado;
    
    //---------------problema de las notas---------------
	
	/*
	Primera nota VX seria el 30% 
	Segunda nota VY seria el 10% 
	Tercera nota VZ seria el 60% 
	
	*/
	
	float N1,NF;
	cout<<"|\n --------------------------------------|";
	
	N1 = VX * 0.30;
	cout<<"\n Nota 1 del estudiante:"<<N1;
	VY = VY * 0.10;
	cout<<"\n Nota 2 del estudiante:"<<VY;
	VZ *= 0.60;  
	cout<<"\n Nota 3 del estudiante:"<<VZ;
	NF = N1 + VY + VZ;
	cout<<"\n Nota Final del estudiante:"<<NF;
	
	cout<<"\n la nota final del estudiante es:"<<NF;
	cout<<"|\n --------------------------------------|";
	return 0;
}
