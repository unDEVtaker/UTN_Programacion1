//M�ximo entre dos n�meros: Crea una funci�n que reciba dos n�meros y devuelva el mayor. 
//En main, solicita al usuario ambos n�meros y muestra cu�l es el mayor de los dos.
#include <iostream>
using namespace std;

int mayor(int n1, int n2)
{
	if(n1 > n2)
	{
		return n1;
	}
	else
	{
		return n2;
	}
}




int main(int argc, char *argv[]) {
	
	int n1, n2;
	
	cout << "Ingrese un numero: " << endl;
	cin >> n1;
	
	cout << "Ingrese otro numero: " << endl;
	cin >> n2;
	
	int resultado = mayor(n1,n2);
	
	cout << "El mayor de los dos numeros es: " << resultado << endl;
	
	return 0;
}

