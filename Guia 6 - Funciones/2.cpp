#include <iostream>
using namespace std;

//Hacer una funci�n llamada CalcularMaximo que determine el m�ximo entre dos n�meros.
//La funci�n debe recibir dos n�meros enteros por valor y devolver el valor m�s grande.
//Si los n�meros son iguales debe devolver cualquiera de los dos. La funci�n no debe mostrar nada por pantalla. 
//Hacer un programa para ingresar dos n�meros y, utilizando CalcularMaximo, emita luego el n�mero mayor de ambos.
	
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

