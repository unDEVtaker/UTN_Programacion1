//Ejercicio: Duplicar un n�mero
//Objetivo: Crear una funci�n que duplique el valor de un n�mero entero pasado como par�metro.

#include <iostream>
using namespace std;

int duplicar (int &num){
	num*=2;
	return num;
}


int main() {
	
	int n;
	
	cout << "Ingrese un numero: " << endl;
	cin >> n;
	
	duplicar(n);
	cout << "El numero duplicado " << n << endl;
	
	return 0;
}

