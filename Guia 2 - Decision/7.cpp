#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	/*Hacer un programa para ingresar por teclado tres números e informar con una leyenda aclaratoria si los tres son todos distintos entre sí, caso contrario no emitir nada. 
	Tener en cuenta: Si A es distinto de B y B es distinto de C, eso no significa que A y C sean distintos. Ejemplo: A=8, B=6 y C=8.
	*/
	
	int n1, n2, n3;
	
	cout << "Ingrese un numero: ";
	cin >> n1;
	cout << "Ingrese un numero: ";
	cin >> n2;
	cout << "Ingrese un numero: ";
	cin >> n3;
	
	//valido que se cumplan las 3 condiciones con operador logico &&	
	if(n1!=n2 && n2!=n3 && n1!=n3){
		cout << "Los tres  numeros son distintos.";
	}
	
	return 0;
}

