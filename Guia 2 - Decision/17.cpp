#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	/*
	Hacer un programa para ingresar por teclado cuatro n�meros. 
	Si los valores que se ingresaran est�n ordenados en forma creciente, 
	emitir el mensaje �Conjunto Ordenado�, caso contrario emitir el mensaje: �Conjunto Desordenado�. 
	Ejemplo A: si los n�meros que se ingresan son 8, 10, 12 y 14, entonces est�n ordenados. 
	Ejemplo B: si los n�meros que se ingresan son 8, 12, 12 y 14, entonces est�n ordenados. 
	Ejemplo C: si los n�meros que se ingresan son 10, 8, 12 y 14, entonces est�n desordenados.
	*/
	
	int n1, n2, n3, n4;
	
	cout << "Ingrese un numero: ";
	cin >> n1;
	
	cout << "Ingrese un numero: ";
	cin >> n2;
	
	cout << "Ingrese un numero: ";
	cin >> n3;
	
	cout << "Ingrese un numero: ";
	cin >> n4;
	
	if(n1 <= n2 && n2<=n3 && n3<=n4){
		cout << "Conjunto Ordenado.";
	}
	else{
		cout << "Conjunto Desordenado.";
	}
	
	return 0;
}
