//Cálculo del cuadrado de un número: Crea una función que reciba un número y devuelva su cuadrado. 
//En main, pide al usuario que ingrese un número y muestra el cuadrado calculado.
	
#include <iostream>
using namespace std;

int pCuadrado (int n){
	int cuadrado = n*n;
	return cuadrado;
}

int main(int argc, char *argv[]) {
	
	int n;
	
	cout << "Ingres un numero: " << endl;
	cin >> n;
	
	int resultado = pCuadrado (n);
	
	cout << n << " al cuadrado es = " << resultado;
	
	return 0;
}

