#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	/*Basado en los 2 ejercicios anteriores, hacer un programa para ingresar por teclado la longitud de los tres lados de un tri�ngulo y luego listar qu� tipo de tri�ngulo es: 
	- Equil�tero: si los tres lados son iguales.
	- Is�sceles: si dos de los tres lados son iguales.
	- Escaleno: si los tres lados son distintos entre s�.
	*/
	
	int l1, l2, l3;
	
	cout << "Que tipo de triangulo es?" << endl;
	cout << "Ingrese el primer lado:" ;
	cin >> l1;
	
	cout << "Ingrese el segundo lado:" ;
	cin >> l2;

	cout << "Ingrese el tercer lado:" ;
	cin >> l3;
	
	if(l1 == l2 && l2 ==l3){
		cout << "El triangulo es Equilatero.";
	}
	else if(l1 != l2 && l2 !=l3 && l1 != l3 ){
		cout << "el triangulo es Escaleno.";
	}
	else{
		cout << "El triangulo Isoseles.";
	}
	
	return 0;
}

