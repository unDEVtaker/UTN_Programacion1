#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	/*Hacer un programa para ingresar por teclado un número y luego informar por pantalla con un cartel aclaratorio si el mismo es par o impar.*/
	//necesito: una variable int para el numero que se ingresa
	
	int n;
	
	//solicito por teclado el valor y lo asigno a la variable
	
	cout << "Vamos a calcular si el numero es par o impar." << endl;
	cout << "Ingrese un numero: ";
	cin >> n;
	
	if(n % 2 == 0){ //si el resto %2 = 0, es par
		cout << n << " es par.";
	}else{
		cout << n << " es impar.";
	}

	return 0;
}

