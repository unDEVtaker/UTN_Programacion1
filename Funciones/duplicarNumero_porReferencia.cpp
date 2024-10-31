//Ejercicio: Duplicar un número
//Objetivo: Crear una función que duplique el valor de un número entero pasado como parámetro.

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

