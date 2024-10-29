#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	/*
	Hacer un programa para ingresar por teclado las cuatro notas de los exámenes obtenidas por un alumno 
	y luego emitir uno solo de los cartel de acuerdo a las siguientes condiciones: 
	- “Promociona”, sí obtuvo en los cuatro exámenes nota 7 o más. 
	- “Rinde examen final”, si obtuvo nota 4 o más en por lo menos tres exámenes. 
	- “Recupera Parciales”, si obtuvo nota 4 o más en por lo menos uno de los exámenes. 
	- “Recursa la materia”, si no aprobó ningún examen parcial.
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
