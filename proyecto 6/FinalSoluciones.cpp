#include <iostream>// Base de c++ ( cout ^ cin )

/* 1) Escribir un programa que idenfique la edad entre un rago  [ 18 ^ 25 ] */
/* 2) Hacer un programa que inserte 3 numeros y el 4 numero compara si es igual alguno de los anteriores*/
/* 3) Hacer un menu donde inserte un numero y haga los siguientes casos 
  Primer caso : Cubo de ese numero insertado
   segundo caso :  Numero par o impar
   Tercer caso: Salir
*/

using namespace std; // ( identifique cout ^ cin )

int main(){
		
		int numero;
		int opc;
		
		cout<<" Bienvenido a la calculadora Cientifica"<<endl;
		cout<<"ingresa un numero:"<<endl;
		cin>>numero;
		cout<<"\n ¿Que procesos necesitas hacer?"<<endl;
		cout<<"\n |  1) --> Cubo del numero"<<endl;
		cout<<"\n |  2) --> Numero par o impar"<<endl;
		cout<<"\n Inserta tu opcion:"<<endl;
		cin>>opc;
		switch(opc){
		
			case 1:
				
				cout<<"cubo del numero insertado es ="<<(numero*numero*numero)<<endl;
				
			case 2:
			 cout<<" El numero es:"<<endl;
			 
			 if(numero % 2 == 0){
			 	cout<<"el numero es par"<<endl;
			 }else { 
			 	cout<<"el numero es impar"<<endl;
			 }
			
			case 3: break; 	
				
		}
		
	return 0;//salir o detener el programa 
	
}

/*
	
	Solucion #1:
	
	int  edad;
	cout<<" Digite su edad:";
	cin>>edad;
	 18 - 19 - 20 -21 -22 - 23 -24 25 
	// los condicionales ( if ^ Else )
	
	if((edad >= 18)&&(edad<=25)){
		cout<<"Su edad Cumple Con Requisitos";		
	}else{
		cout<<"Su edad No Cumple con los requisitos";
	}

	

  Ejercicio # 2:

		// 1) definimos las varibles  
	int num1;
	int num2;
	int num3;
	
	int num4;
	
	// 2) Ingreso de variables

	cout<<"Dame los 3 primeros numeros:";//cout = (mostrar en pantalla)
	cin>>num1;// cin = ( ingresa esta variable )
	cin>>num2;
	cin>>num3;
	cout<<"\n Dame el numero a comparar:";	
	cin>>num4;
		
	// 3) definimos nuestras condiciones o codicionales
	
	if((num1 == num4) || (num2 == num4) || (num3 == num4)){
	
	cout<<"\n :"<<num4<< " Si esta en ese conjunto :"<<num1<<num2<<num3;
	
	}else{
	
		cout <<"\n NO, esta en ese conjunto";
	
	}
	
*/
	
