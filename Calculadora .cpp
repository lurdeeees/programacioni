#include <iostream>
using namespace std;

float valor1 = 0;
float valor2 = 0;
float resultado = 0; 

int suma ();
int resta ();
int multiplicacion ();
int division ();

int main (){
	suma();
	resta ();
	multiplicacion();
	division();
	 return 0; 
}

int suma (){
	cout << "SUMA"<< endl;
	cout << "Ingrese el primer valor "<< endl;
	cin >> valor1;
	cout << "Ingrese el segundo valor" << endl;
	cin >> valor2;
	resultado = (valor1 + valor2);
	cout << "La suma es: "<< resultado << endl;
}
int resta (){
	cout << "RESTA"<< endl;
	cout << "Ingrese el primer valor "<< endl;
	cin >> valor1;
	cout << "Ingrese el segundo valor" << endl;
	cin >> valor2;
	resultado = (valor1 - valor2);
	cout << "La resta es: "<< resultado << endl;
}
int multiplicacion (){
	cout << "MULTIPLICACION"<< endl;
	cout << "Ingrese el primer valor "<< endl;
	cin >> valor1;
	cout << "Ingrese el segundo valor" << endl;
	cin >> valor2;
	resultado = (valor1 * valor2);
	cout << "La multiplicacion es: "<< resultado << endl;
}
int division (){
	cout << "DIVISION"<< endl;
	cout << "Ingrese el primer valor "<< endl;
	cin >> valor1;
	cout << "Ingrese el segundo valor" << endl;
	cin >> valor2;
	resultado = (valor1 / valor2);
	cout << "La division es: "<< resultado << endl;
}