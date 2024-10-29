#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	/*
	Hacer un programa para ingresar cinco números y listar el máximo y el mínimo de ellos.
	*/
	
	int n1, n2, n3,n4,n5, max, min;
	
	cout << "Cual es el maximo y el minimo?" << endl;
	cout << "Ingrese un numero: ";
	cin >> n1;
	max = n1;
	min = n1;
	
	cout << "Ingrese un numero: ";
	cin >> n2;	
	
	if(n2 > max){
		max =n2;
	}
	else {
		min = n2;
	}
	
	cout << "Ingrese un numero: ";
	cin >> n3;
	
	if(n3 > max){
		max = n3;
	}else if(n3 < min) {
		min =n3;
	}
	
	cout << "Ingrese un numero: ";
	cin >> n4;
	if(n4 > max){
		max = n4;
	}else if(n4 < min) {
		min =n4;
	}
	
	cout << "Ingrese un numero: ";
	cin >> n5;
	if(n5 > max){
		max = n5;
	}else if(n5 < min) {
		min =n5;
	}
	
	cout << "El maximo es: " << max <<" y el minimo es: " << min;
	
	return 0;
}

