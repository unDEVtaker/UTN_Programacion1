//Escribir una función CalcularMaximoAbsoluto que reciba dos números y retorne el máximo absoluto de ambos. 
//Por ejemplo el máximo absoluto de los números -40 y 20 es 40.
//Hacer un programa para ingresar dos números y, utilizando CalcularMaximoAbsoluto, emita luego el número mayor absoluto de ambos.

#include <iostream>
using namespace std;

int CalcularMaximoAbsoluto(int num1, int num2){

	int positivoNum1 = (num1 < 0) ? -num1 : num1;
	int positivoNum2 = (num2 < 0) ? -num2 : num2;
	
	return (positivoNum1 > positivoNum2) ? positivoNum1 : positivoNum2;
}
	

int main() {
	
	int n1, n2;
	
	cout << "Ingrese un numero: " << endl;
	cin >> n1;
	
	cout << "Ingrese otro numero: " << endl;
	cin >> n2;
	
	int maximoAbs = CalcularMaximoAbsoluto (n1,n2);
	
	cout << "El maximo absoluto entre " << n1 << " y " << n2 << " es: " << maximoAbs << endl;
	
	return 0;
}

