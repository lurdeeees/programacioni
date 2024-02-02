#include <iostream>

using namespace std;

int operadoresyvariables(){
    float  v1, v2, l1, l2, l3, l4;
    
    cout<<"Ingresar dos numeros enteros \n";
    cout<<"Valor 1: ";
    cin>>v1;
    cout<<"Valor 2: ";
    cin>>v2;
    l1 = v1 + v2;
    l2 = v1 - v2;
    l3 = v1 * v2;
    l4 = v1 / v2;

    cout<<"Resultados de las operaciones \n";
    cout<<"1. Suma: "<<v1<<          "+"<<v2<<"="<<l1<<"\n";
    cout<<"2. Resta: "<<v1<<         "-"<<v2<<"="<<l2<<"\n";
    cout<<"3. Multiplicasion: "<<v1<<"*"<<v2<<"="<<l3<<"\n";
    cout<<"4. Divicion: "<<v1<<      "/"<<v2<<"="<<l4<<"\n";
    
	system("PAUSE");
	system("cls");
	return 0;
	}
	
int calcularPotencia(){
	int n1;
	int e2;
	float resultado = 1;
	
	cout<<"Porfavor ingresar un numero entero y luego su exponente \n";
    cout<<"Numero Base: ";
    cin>>n1;
    cout<<"Exponente: ";
    cin>>e2;
    
    if (e2 == 0){
    	resultado = 1;
    	cout<<"el valor "<<n1<<" elevado a "<<e2<<" es igual a "<<resultado<<"\n";
	}else if(e2 < 0){
		for(int i=0;i>e2;i--){
			resultado = n1*resultado;
		}
		resultado = 1/resultado;
		cout<<"el valor "<<n1<<" elevado a "<<e2<<" es igual a "<<resultado<<"\n";
	}else if(e2 > 0){
		for(int i=0;i<e2;i++){
			resultado = n1*resultado;
		}
		cout<<"El numero "<<n1<<" elevado a "<<e2<<" es igual a "<<resultado<<"\n";
	}
	
	system("PAUSE");
	system("cls");
    return 0;
}

int esPrimo(){
	int num;
	cout<<"Ingresar numero entero para saber si es primo o no \n";
    cout<<"Numero entero: ";
    cin>>num;
    
    if(num == 1 or num == 0  or num < 0){
    	cout<<"No es un numero primo\n";
		}else if(num==2 or num==3){
			cout<<"Es un numero primo\n";
			return 0;
			}else {for(int i=2;i<num;i++){
			if(num%i == 0){
			cout<<"No es un numero primo\n";
			return 0;
			}}}
			
	if (num%1 == 0 and num%num == 0){
		cout<<"Es un numero primo\n";
	}
	
	system("PAUSE");
	system("cls");
	return 0;
}

int esBisiesto(){
	int a;

	cout<<"Coloque un año para verificar si es bisiesto o no\n";
	cin>>a;
	if (a%100 == 0 and a%400==0){
		cout<<"El año ingresado es bisiesto\n";
	} else if(a%100 == 0){
		cout<<"El año ingresado no es bisiesto\n";
	}else if(a%4 == 0){
		cout<<"El año es bisiesto\n";
	}else{
		cout<<"El año no es bisiesto\n";
	}
	system("PAUSE");
	system("cls");
	return 0;
}
int main(){
    
    int option;
    
    while (1==1)
{
	cout<<"Que deseas realizar: \n 1. Operadores y Variables \n 2. Potencias \n 3. Primos \n 4. año bisiesto \n 5. salir \n";
	cin>>option;
	switch (option)
	{
	case 1:
		operadoresyvariables();
		break;
	
	case 2:
		calcularPotencia();
		break;

	case 3:
		esPrimo();
		break;

	case 4:
		esBisiesto();
		break;

	case 5:
		exit(EXIT_SUCCESS);	
		break;


	
	}
}
return 0;
}