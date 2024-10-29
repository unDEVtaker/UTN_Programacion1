// Determinar si un número es par o impar: Crea una función que reciba un número entero y devuelva true si es par y false si es impar.
// En main, solicita al usuario un número e indica si es par o impar.

#include <iostream>
using namespace std;

	bool esPar(int n)
	{
		bool resultado = false;
		
		if (n % 2 == 0)
		{
			resultado = true;
		}
		
		return resultado;
	}


int main(int argc, char *argv[]) {
	
	int n;
	
	cout << "Ingrese un numero: ";
	cin >> n;
	
	if(esPar(n))
	{
		cout << n << " es par." << endl;
	}else
	{
		cout << n << " es impar." << endl;
	}
	
	return 0;
}

