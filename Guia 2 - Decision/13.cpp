#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	/*
	Hacer un programa para ingresar tres números distintos y listarlos ordenados de menor a mayor. 
	Sugerimos probar CADA UNA de las siguientes 6 combinaciones.
	Si N1=8, N2=6, N3=10 ó  N1=8, N2=10, N3=6. Se muestra: 6, 8, 10.
	Si N1=6, N2=8, N3=10 ó  N1=10, N2=8, N3=6. Se muestra: 6, 8, 10.
	Si N1=6, N2=10, N3=8 ó  N1=10, N2=6, N3=8. Se muestra: 6, 8, 10.
	*/
	
	int n1, n2, n3, menor, medio, mayor;
	
	cout << "Ingrese un numero: ";
	cin >> n1;
	
	cout << "Ingrese un numero: ";
	cin >> n2;
	
	cout << "Ingrese un numero: ";
	cin >> n3;
	
	if(n1<n2 && n1 <n3){//por bloque defino primero el menor, para que no se haga muy largo el codigo
		menor = n1;
		if(n2<n3){
			medio = n2;
			mayor = n3;
		}
		else{
			medio = n3;
			mayor = n2;
		}
	}
	else if(n2 < n1 && n2 < n3){
		menor = n2;
		if(n1 < n3){
			medio = n1;
			mayor =n3;
		}
		else{
			medio = n3;
			mayor = n1;
		}
	}else if(n3 < n1 && n3 < n2){
		menor = n3;
		if(n1 < n2){
			medio = n1;
			mayor = n2;
		}else{
			medio = n2;
			mayor = n1;
		}
	}

	cout << menor << " - " << medio << " - " << mayor;
	
	return 0;
}

