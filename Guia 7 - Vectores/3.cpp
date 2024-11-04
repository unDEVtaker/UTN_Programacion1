#include <iostream>
#include <vector>
using namespace std;


//Leer 10 n�meros y guardarlos en un vector. Determinar e informar cu�l es el valor m�ximo y su posici�n dentro del vector.

int main() {
	
	vector<int>numeros(10);
	int max, posicionMax;
	
	cout << "Ingrese 10 numeros: "<< endl;
	
	//ciclo for para ingresar y guardar en el vector
	for(int i = 0; i < 10; i++){
		cout << "Ingrese el " << i+1 << ": ";
		cin >> numeros[i];
		
		// Al primer n�mero, inicializamos el m�ximo y su posici�n
		if(i==0){
			max = numeros[i];
			posicionMax = i;
		}
		//me fijo si es el maximo con un if
		if(numeros[i] > max){
			max = numeros[i];
			posicionMax = i;
		}
	}
	
	//muestro por pantalla
	cout << "El valor maximo es: " << max << endl;
	cout << "Se encuentra en la posicion numero "<< posicionMax << " del vector."<< endl; 
	
	return 0;
}

