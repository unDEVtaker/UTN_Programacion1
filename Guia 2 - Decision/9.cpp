#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	/*
	Hacer un programa para ingresar tres números y listar el máximo de ellos.
	*/
	
	int n1, n2, n3, max;
	
	cout << "Cual es el maximo?" << endl;
	cout << "Ingrese un numero: ";
	cin >> n1;
		
	cout << "Ingrese un numero: ";
	cin >> n2;	
	
	cout << "Ingrese un numero: ";
	cin >> n3;
	
	if(n1 >= n2 && n1 >= n3){
		max = n1;
	}
	else if(n2 >= n3){
		max = n2;
	}
	else{
		max = n3;
	}
	
	cout << "El maximo es: "<< max;
	
	return 0;
}

