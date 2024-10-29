#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	/*Hacer un programa para ingresar por teclado dos números y luego informar por pantalla la diferencia entre ambos. 
	Ejemplo A: Si se ingresan 3 y 8 se emite 5. Si se ingresan 8 y 3 se emite 5. Ejemplo B: Si se ingresan -3 y 9 se emite 12. Si se ingresan -12 y -1 se emite 11.
	Ejemplo C: Si se ingresan -3 y -9 se emite 6. Si se ingresan -12 y -9 se emite 3.
	Importante: Verifique que el programa emite SIEMPRE UN VALOR POSITIVO porque la diferencia absoluta siempre es un valor positivo.
	*/
	
	//necesito dos variables int para el ingreso de numeros y una varible donde calcular la diferencia
	
	int n1, n2, diferencia;
	
	//solicito los datos por teclado
	
	cout << "Vamos a calcular la diferencia entre dos numeros." << endl;
	cout << "Ingrese un numero: ";
	cin >> n1;
	cout << "Ingrese un numero: ";
	cin >> n2;
	
	//calculo diferencia, siempre da positivo
	diferencia = -(n1-n2);
	
	cout << "La diferencia entre " << n1 << " y " << n2 << " es: " << diferencia;
	
	
	return 0;
}

