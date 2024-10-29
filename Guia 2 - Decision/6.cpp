#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	/*Hacer un programa para ingresar por teclado tres números y luego determinar e informar con una leyenda aclaratoria si los tres son iguales entre sí, caso contrario no emitir nada.
	Tener en cuenta:  Si A es igual a B y B es igual a C, entonces A y C son iguales.
	*/
	
	int n1, n2, n3;
	
	cout << "Ingrese un numero: ";
	cin >> n1;
	cout << "Ingrese un numero: ";
	cin >> n2;
	cout << "Ingrese un numero: ";
	cin >> n3;
	
	//valido que se cumplan las 3 condiciones con operador logico &&
	
	if(n1==n2 && n2 ==n3){
		cout << "Los tres  numeros son iguales.";
	}
	
	return 0;
}
