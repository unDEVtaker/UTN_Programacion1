#include <iostream>
#include <vector>
using namespace std;

/*Hacer un programa para ingresar 10 números y guardarlos en un vector. Determinar e informar cuál es la suma de los valores del vector.*/
	
int main() {
	vector<int> numero(10);
	int suma = 0;
	
	cout << "Ingrese 10 numeros: "<<endl;
	for ( int i=0; i<10; i++){
		cout << "Numero " << i + 1 << ": ";
		cin >> numero[i];
		suma += numero[i];
	}
	
	cout << "La suma de los vectores es: " << suma << endl;
	
	return 0;
}

