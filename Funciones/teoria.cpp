#include <iostream>
using namespace std;

int suma (int n1, int n2){
	int sumar = n1 + n2;
	return sumar;
}

int main(int argc, char *argv[]) {
	//Suma de dos n�meros: Crea una funci�n que reciba dos n�meros enteros como par�metros y devuelva su suma.
	//En main, pide al usuario que ingrese los dos n�meros y muestra el resultado de la funci�n.
	
	
	int n1, n2;
	
	cout << "Ingrese el primer numero: " << endl;
	cin >> n1;
	
	cout << "Ingrese el segundo numero: " << endl;
	cin >> n2;
	
	int resultado = suma(n1,n2);
	cout << "La suma de " << n1 << " + " << n2 << " = "<< resultado << endl;
	
	return 0;
}

