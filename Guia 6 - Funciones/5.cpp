//Hacer una funci�n llamada Redondear que reciba como par�metro un n�mero float y devuelva un n�mero entero con el redondeo del mismo.
//Por ejemplo:
//Si recibe 7.78, debe devolver 8.
//Si recibe 7.48, debe devolver 7.
//Si recibe 7.5, debe devolver 8.
//Hacer un programa para ingresar un n�mero y, utilizando Redondear, emita luego un cartel indicando el n�mero redondeado.
	

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

