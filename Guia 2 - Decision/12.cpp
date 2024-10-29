#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	/*Hacer un programa para ingresar tres números diferentes y determinar e informar el número del medio.
	Sugerimos probar CADA UNA de las siguientes 6 combinaciones.
	N1=8, N2=6, N3=10. Valor del medio: 8. N1=8, N2=10, N3=6. Valor del medio: 8
	N1=6, N2=8, N3=10. Valor del medio: 8. N1=10, N2=8, N3=6. Valor del medio: 8
	N1=6, N2=10, N3=8. Valor del medio: 8. N1=10, N2=6, N3=8. Valor del medio: 8
	*/
	
	int n1, n2, n3, medio;
	
	cout << "Ingrese un numero: ";
	cin >> n1;
	
	cout << "Ingrese un numero: ";
	cin >> n2;
	
	cout << "Ingrese un numero: ";
	cin >> n3;
	
	if((n1 > n2 && n1 < n3) || (n1 > n3 && n1 < n2)){
		medio = n1;
	}else if((n2 > n1 && n2 < n3 )||( n2 > n3 && n2 < n1)){
		medio = n2;
	}else if((n3>n1 && n3 < n2 )||( n3> n2 && n3 < n1)){
		medio = n3;
	}
	
	cout << "Valor del medio: " << medio;

	return 0;
}

