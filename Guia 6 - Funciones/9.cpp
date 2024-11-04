//Escribir una función que reciba un número y retorne 1 si el número recibido es perfecto y 0 si no es perfecto.
//Hacer un programa para que, dada una lista de números que finaliza con cero, informe cuántos de ellos eran perfectos. 
//Utilizar la función solicitada.
//Un número perfecto es un número entero positivo que es igual a la suma de sus divisores propios positivos.

#include <iostream>
using namespace std;

int numPerfecto(int n){
	//no tiene que ser negativo;
	//hago el resto por cada uno y los cuento si =0;
	//comparo el contador con el numero ingreado,si es igual es perfecto.
	
	if(n <= 0){
		return 0;
	}
	
	int sumaDivisores = 0;
	for(int i = 1 ; i < n; i++){
		if(n % i == 0){
			sumaDivisores += i;
		}
	}
	
	return  sumaDivisores == n;
}
int main() {
	
	int n, contPerfectos = 0;
	for(int i = 1; i <= 10; i++){
		cout << "Ingrese el numero: "<< i << " : ";
		cin >> n;
		
		if(numPerfecto(n)){
			contPerfectos++;
		}
	}
	
	cout << contPerfectos;
	
	return 0;
}

