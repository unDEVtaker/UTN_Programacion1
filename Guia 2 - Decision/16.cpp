#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	/*
	Hacer un programa para ingresar por teclado las cuatro notas de los ex�menes obtenidas por un alumno 
	y luego emitir uno solo de los cartel de acuerdo a las siguientes condiciones: 
	- �Promociona�, s� obtuvo en los cuatro ex�menes nota 7 o m�s. 
	- �Rinde examen final�, si obtuvo nota 4 o m�s en por lo menos tres ex�menes. 
	- �Recupera Parciales�, si obtuvo nota 4 o m�s en por lo menos uno de los ex�menes. 
	- �Recursa la materia�, si no aprob� ning�n examen parcial.
	*/
	
	int n,cont4OMas=0, contSieteOMas=0;
	
	cout << "Ingreser nota: ";
	cin >> n;	
	cont4OMas +=(n >= 4);
	contSieteOMas +=(n >=7);

	cout << "Ingreser nota: ";
	cin >> n;
	cont4OMas +=(n >= 4);
	contSieteOMas +=(n >=7);
	
	cout << "Ingreser nota: ";
	cin >> n;
	cont4OMas +=(n >= 4);
	contSieteOMas +=(n >=7);
		
	cout << "Ingreser nota: ";
	cin >> n;
	cont4OMas +=(n >= 4);
	contSieteOMas +=(n >=7);
	
	if(contSieteOMas == 4){
		cout << "PROMOCIONA";
	}
	else{
		switch(cont4OMas){
		case 3:
			cout << "Rinde Examen Final";
			break;
		case 2:
			
		case 1: 
			cout << "Recupera Parciales";
			break;
		default:
			cout << "Recursa la materia";
			break;
		}
	}
	   
	return 0;
}
