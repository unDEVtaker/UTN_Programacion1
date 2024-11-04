#include <iostream>
#include <vector>
using namespace std;

//Leer 10 n�meros y guardarlos en un vector.
//Determinar e informar cu�l es el menor de los impares y el mayor de los pares.
//Suponer que habr� al menos un n�mero par y uno impar.

int main() {
	
	vector<int>numeros(10);
	int minImpares, maxPares;
	//banderas para los primeros numeros (Suponer que habr� al menos un n�mero par y uno impar.)
	bool primerPar = true;
	bool primerImpar = true;
	
	cout << "Ingrese 10 numeros: " << endl;
	
	//pido 10 numeros con un ciclo for
	for(int i = 0 ; i < 10 ; i++){
		cout << "Numero " << i +1<< ": ";
		cin >> numeros[i];
		
		//buscando el par
		if(numeros[i] % 2 ==0){
			//busco el primer par usando la bandera
			if(primerPar){
				maxPares = numeros[i];
				primerPar = false;
			}
			//busco el max
			else if(numeros[i] > maxPares){
				maxPares = numeros[i];
			}
		}
		
		//buscando el impar
		if(numeros[i] % 2 !=0){
			//busco el primer impar usando la bandera
			if(primerImpar){
				minImpares = numeros[i];
				primerImpar = false;
			}
			//busco el min
			else if(numeros[i] < minImpares){
				minImpares = numeros[i];
			}
		}
		
		
		
		
	}
	
	//muestro por pantalla
	cout << "El maximo de los pares es: " << maxPares << endl;
	cout << "El minimo de los impares es: " << minImpares << endl;
	
	return 0;
}

