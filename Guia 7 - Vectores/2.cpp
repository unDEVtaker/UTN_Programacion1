#include <iostream>
#include <vector>
using namespace std;

/*Leer 10 números y guardarlos en un vector. Calcular el promedio y luego mostrar por pantalla los valores que son mayores al promedio.*/
	
	
int main() {
	
	vector <int> numeros(10);
	
	int sumar=0, promedio=0;
	
	cout <<"Ingrese 10 numeros: "<< endl;

	//pido los 10 numeros con un for
	for(int i = 0; i < 10; i++){
		cout << "Numero " << i+1 << ": " ;
		cin >> numeros[i]; //guardo los numeros en el vector
		sumar += numeros[i]; //acumulo los numeros ingresados al vector
	}
	
	promedio = sumar/10; //calculo el promedio de 10 numeros;
	
	cout << "Promedio: " << promedio << endl;
	
	cout << "Numeros mayores al promedio: " << endl;
	//con un for recorro el vector
	for(int i = 0; i < 10; i++){
		//con un if me fijo si cumple la condicion n>p;
		if(numeros[i] >promedio){
			cout << numeros[i] << endl;
		}
	}
	
	return 0;
}

