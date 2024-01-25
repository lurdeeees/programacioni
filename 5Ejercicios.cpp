#include<iostream>
#include<cstdlib>
using namespace std;
	int menu;
	int p;
	int a;
	int z;
	int l;
	int edad;
	int nota;
int main(){
	

	do{
		cout << "Que desea realizar? "<< endl; 
	
		cout << "1. Si un numero ingresado por el usuario es par [1]" << endl;
		
		cout << "2. Si un año ingresado es bisiesto o no.       [2]" << endl;
		
		cout << "3. Dos numeros y determine si son iguales.      [3] " << endl; 
		
		cout <<"4. Verifique si es mayor de edad                [4] " <<endl; 
		
		cout << "5. Si un estudiante aprobo un examen            [5] " <<endl;
	
		cin >> menu;
		system("cls");
	
	
	switch(menu)
		{
			case 1:
				cout << "Lourdes Santos" << endl;
				cout << "Verificacion si un numero ingresado por el usuario es par." << endl;
				cout << "Ingresa un numero: " <<endl;
				cin >> p;
				if(p % 2 == 0){
					cout << "El numero que ingresaste es par \n";	
				}
				else{
					cout << "El numero que ingresaste no es par \n";
				}
				system("pause");
				break;
			case 2:
				cout << "Lourdes Santos" << endl;
				cout << "Determine si un año ingresado es bisiesto o no." << endl;
				cout << "Ingrese el año: " <<endl;
				cin >> a;
				if(a % 4 == 0 && a % 100 != 0 || a % 400 == 0) {
					cout << "El año es bisiesto \n";	
				}
				else{
					cout << "El año no es bisiesto \n";
				}
				system("pause");
				break; 
			case 3: 
				cout << "Lourdes Santos" << endl;
				cout << "Solicitar al usuario dos numeros y determine si son iguales" << endl;
				cout << "Ingrese el primer valor: " <<endl;
				cin >> z;
				cout << "Ingrese el segundo valor: " <<endl;
				cin >> l;
				
				if(z == l){
					cout << "Los numeros ingresados SI SON IGUALES \n";	
				}
				else{
					cout << "Los numeros ingresados NO SON IGUALES \n";
				}
				system("pause");
				break;
			case 4:
				cout << "Lourdes Santos" << endl;
				cout << "Verificacion si es mayor de edad." << endl;
				cout << "Ingresa tu edad: " <<endl;
				cin >> edad;
				if(edad >= 18){
					cout << "Eres mayor de edad \n";	
				}
				else{
					cout << "Eres menor de edad \n";
				}
				system("pause");
				break;
			case 5: 
				cout << "Lourdes Santos" << endl;
				cout << "Evalue si un estudiante aprobo un examen, considerando que la calificacion de aprobacion es 60 o mas." << endl;
				cout << "Ingresa tu nota: " <<endl;
				cin >> nota;
				if(nota >= 60){
					cout << "Aprobaste tu examen, felicidades \n";	
				}
				else{
					cout << "Reprobaste tu examen, estudia mas \n";
				}
				system("pause");
				break;
					
		}
		system("cls");
	
	}while (menu <= 5);
	cout << "Opcion invalida" << endl;
		return 0;
	}
