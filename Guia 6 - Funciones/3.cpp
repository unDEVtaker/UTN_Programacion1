//Hacer una funci�n llamada EsPrimo que determine si un n�mero es primo o no.
//La funci�n debe recibir el n�mero y devolver true si es primo o false si no lo es.
//La funci�n no debe mostrar nada por pantalla. 
//Hacer un programa para ingresar un n�mero y, utilizando EsPrimo, emita luego un cartel indicando si el n�mero ingresado es primo o no es primo. 
	
#include <iostream>
using namespace std;

bool EsPrimo(int n){
	if(n == 1){
		return false;
	}
	
	for (int i = 2; i <= n / 2; i += 2) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}

int main() {
	int n;
	
	cout << "Ingrese un numero: " << endl;
	cin >> n;
	
	
	bool calcular = EsPrimo(n);
	
	if(calcular){
		cout << n << " es un numero primo."<<endl;
	}
	else{
		cout << n << " no es un numero primo."<<endl;
	}
	
	return 0;
}

