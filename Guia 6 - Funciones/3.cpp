//Hacer una función llamada EsPrimo que determine si un número es primo o no.
//La función debe recibir el número y devolver true si es primo o false si no lo es.
//La función no debe mostrar nada por pantalla. 
//Hacer un programa para ingresar un número y, utilizando EsPrimo, emita luego un cartel indicando si el número ingresado es primo o no es primo. 
	
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

