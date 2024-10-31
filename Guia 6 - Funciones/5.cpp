//Hacer una función llamada Redondear que reciba como parámetro un número float y devuelva un número entero con el redondeo del mismo.
//Por ejemplo:
//Si recibe 7.78, debe devolver 8.
//Si recibe 7.48, debe devolver 7.
//Si recibe 7.5, debe devolver 8.
//Hacer un programa para ingresar un número y, utilizando Redondear, emita luego un cartel indicando el número redondeado.
	

#include <iostream>
#include <cmath>
using namespace std;

int Redondear(float n){
	int redondeo = round(n);
		return redondeo;
}


int main() {
	float n;
	
	cout << "Ingrese un nuemero: " << endl;
	cin >> n;
	
	int convertir = Redondear(n);
	
	cout << "El numero " << n << " redondeado es: " << convertir << endl; 
	return 0;
}

