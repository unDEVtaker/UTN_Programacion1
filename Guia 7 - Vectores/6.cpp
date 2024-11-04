#include <iostream>
#include <vector>
using namespace std;

//Leer 10 números y guardarlos en un vector.
//Determinar e informar los dos últimos números pares en el vector y sus respectivas posiciones en el mismo.
//Suponer que habrá al menos dos números pares.

int main() {
	
	vector<int> numeros(5);
	int ultimoPar = -1;
	int penultimoPar = -1;
	
	cout << "Ingrese 10 numeros." << endl;
	//los 10 numeros por ciclo for
	for(int i = 0; i < 5; i++){
		cout << "Ingrese el numero " << i+1 << " : ";
		cin >> numeros[i];
		
		//si el numero es par, actualizo
		if(numeros[i] % 2 == 0){
			penultimoPar = ultimoPar;
			ultimoPar = i;
		}
	}
	
	//muestro por pantalla
	if(penultimoPar != -1 && ultimoPar != -1){
		cout << "El penultimo numero par es: " << numeros[penultimoPar] << " en la posicion: " << penultimoPar << endl;
		cout << "El ultimo numero par es: " << numeros[ultimoPar] << " en la posicion: " << ultimoPar << endl;
	}
	
	return 0;
}

