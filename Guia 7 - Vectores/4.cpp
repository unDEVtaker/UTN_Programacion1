#include <iostream>
#include <vector>
using namespace std;

//Leer 10 números y guardarlos en un vector. Determinar e informar cuál es el valor máximo absoluto del vector.
//Por ejemplo 20, -43 y 5, el máximo absoluto es -43.
	
	
int main() {
	
	vector<int>numeros(10);
	int maxAbsoluto;
	
	cout << "Ingrese 10 numeros. " << endl;
	
	//for para guardar los valores
	for(int i = 0; i < 10 ; i++){
		cout << "Ingrese el numero " << i+1 << " :";
		cin >> numeros[i];
		
		//inicializo el primer numero como el maximo
		if(i==0){
			maxAbsoluto = numeros[i];
		}
		
		//me fijo cual es el maximoAbsoluto con if convirtiendo y comparando positivos
		
		if((numeros[i] < 0 ? -numeros[i] : numeros[i]) > (maxAbsoluto <0 ? -maxAbsoluto : maxAbsoluto)){
			maxAbsoluto = numeros[i];
		}
		
	}
	
	cout << "El maximo absoluto es: " << maxAbsoluto << endl;
	
	return 0;
}

