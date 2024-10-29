#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	/*
	Hacer un programa para ingresar cinco números y listar cuantos de esos cinco números son positivos, cuantos son negativos y cuantos son iguales a 0.
	*/
	
	int n,contPositivos=0, contNegativos=0, contCeros=0;
	
	cout << "Ingrese un numero: ";
	cin >> n;
	
	if(n > 0){
		contPositivos++;
	}
	else if(n < 0){
		contNegativos++;
	}
	else {
		contCeros++;
	}
	
	cout << "Ingrese un numero: ";
	cin >> n;
	
	if(n > 0){
		contPositivos++;
	}
	else if(n < 0){
		contNegativos++;
	}
	else {
		contCeros++;
	}
	
	cout << "Ingrese un numero: ";
	cin >> n;
	
	if(n > 0){
		contPositivos++;
	}
	else if(n < 0){
		contNegativos++;
	}
	else {
		contCeros++;
	}
	
	cout << "Ingrese un numero: ";
	cin >> n;
	
	if(n > 0){
		contPositivos++;
	}
	else if(n < 0){
		contNegativos++;
	}
	else {
		contCeros++;
	}
	
	cout << "Ingrese un numero: ";
	cin >> n;
	
	if(n > 0){
		contPositivos++;
	}
	else if(n < 0){
		contNegativos++;
	}
	else {
		contCeros++;
	}
	
	cout << "Cantidad de positivos: " << contPositivos << endl;
	cout << "Cantidad de negativos: " << contNegativos<< endl;
	cout << "Cantidad de ceros: " << contCeros<< endl;
	
	return 0;
}

