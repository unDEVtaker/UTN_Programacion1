#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	/*Hacer un programa para ingresar por teclado dos números y luego informar por pantalla con un cartel aclaratorio si el primer número es múltiplo del segundo.*/
	
	int n1, n2;
	
	//ingreso el primer numero por consola
	cout << "Ingese un numero: ";
	cin >> n1;
	
	//segundo numero por consola
	cout << "Ingese otro numero: ";
	cin >> n2;
	
	//primero valido que no divida por 0
	if(n2 == 0){
		cout << "No se puede dividir por 0.";
	}
	else if(n1%n2==0){
		//verdadero
		cout << n1 << " es multiplo de " << n2;
	}
	else{
		//falso
		cout << n1 << " no es multiplo de " << n2;
	}
	
	return 0;
}

