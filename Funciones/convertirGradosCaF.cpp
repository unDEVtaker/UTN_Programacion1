// Conversión de grados Celsius a Fahrenheit: Escribe una función que reciba un valor en grados Celsius y lo convierta a Fahrenheit.
// En main, pide al usuario que ingrese la temperatura en grados Celsius y muestra el resultado en Fahrenheit.

// F a C = multiplicar por 9, dividir por 5 y sumar 32
#include <iostream>
using namespace std;

float convertir(float celsius){
	float fahrenheit = ((celsius * 9 )/ 5) + 32;
	return fahrenheit;
}

	
	
int main(int argc, char *argv[]) {
	
	float celsius;
	
	cout << "Ingrese la temperatura en °C: " << endl;
	
	cin >> celsius;
	
	float resultado = convertir(celsius);
	
	cout << celsius << "°C es igual a: " << resultado << "°F" << endl;
	
	return 0;
}

