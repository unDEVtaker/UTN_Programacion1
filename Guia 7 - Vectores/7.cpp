#include <iostream>
#include <vector>
using namespace std;

//Hacer un programa para llenar un vector de 10 elementos con el formato: 1, 0, 1, 0, 1, 0, 1, 0, 1, 0.
//Luego mostrar los n�meros por pantalla.
//EL USUARIO NO INGRESA NING�N VALOR EN ESTE PROGRAMA

int main() {
	vector<int>numeros(10);
	
	for(int i = 0; i < 10; i++){
		numeros[i] = (i % 2 == 0) ? 1:0;
		cout << numeros[i] << ", ";
	}
	
	return 0;
}

