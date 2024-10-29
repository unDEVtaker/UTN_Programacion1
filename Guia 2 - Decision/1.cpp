#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	/*Hacer un programa para ingresar por teclado un número y luego emitir por pantalla un cartel aclaratorio indicando si el mismo es positivo, negativo o cero.
	Importante: Verifique que el programa emita UN SOLO CARTEL.*/
		
	int n;
	
	cout << "Ingrese un numero: ";
	cin >> n;
	
	if(n > 0){
		cout << "POSITVO";
	}
	else if(n<0){
		cout << "NEGATIVO";
	}
	else{
		cout << "CERO";
	}
	return 0;
}
