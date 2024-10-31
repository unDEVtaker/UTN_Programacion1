#include <iostream>
using namespace std;

//Hacer una función llamada CalcularMaximo que determine el máximo entre dos números.
//La función debe recibir dos números enteros por valor y devolver el valor más grande.
//Si los números son iguales debe devolver cualquiera de los dos. La función no debe mostrar nada por pantalla. 
//Hacer un programa para ingresar dos números y, utilizando CalcularMaximo, emita luego el número mayor de ambos.
	
int CalcularMaximo (int n1, int n2)
{
	int maximo;
	
	if(n1 >= n2){
		maximo = n1;
	}
	else{
		maximo = n2;
	}
	return maximo;
}

int main() {
	
	int n1, n2;
	
	cout << "Ingrese un numero: " << endl;
	cin >> n1;
	
	cout << "Ingrese otro numero: " << endl;
	cin >> n2;
	
	int max = CalcularMaximo(n1,n2);
	
	cout << "El numero maximo es: " << max << endl;

	return 0;
}

