//Hacer una funci�n que reciba un n�mero entero por valor llamado d�a y un string llamado nombre por referencia
//y le asigne el nombre correspondiente seg�n el n�mero de d�a. Siendo 0 ? Domingo y 6 ? S�bado.

#include <iostream>
using namespace std;

void DiaSemana(int nDia, string &nombreDia){

	switch(nDia){
	case 0:
		nombreDia = "Domingo";
		break;
	case 1:
		nombreDia = "Lunes";
		break;
	case 2:
		nombreDia = "Martes";
		break;
	case 3:
		nombreDia = "Miercoles";
		break;
	case 4:
		nombreDia = "Jueves";
		break;
	case 5:
		nombreDia = "Viernes";
		break;
	case 6:
		nombreDia = "Sabado";
		break;
	default:
		nombreDia = "Dia invalido.";
		break;
	}

}

int main() {
	
	int n;
	string nomDia;
	
	cout << "Ingrese el numero de dia (0 al 6): "<< endl;
	cin >> n;
	
	DiaSemana (n,nomDia);
	
	cout << "El nombre del dia es: " << nomDia << endl;
	return 0;
}

