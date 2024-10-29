#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	/*Hacer un programa para ingresar por teclado la fecha de nacimiento de una persona, ingresando día, mes y año como 3 datos individuales. 
	Luego ingresar la fecha actual ingresando día, mes y año como 3 datos individuales. 
	Calcular luego la edad en años de esa persona y listar por pantalla. 
	Ejemplo 1. Si se ingresa como fecha de nacimiento: 3/12/2000 y la fecha actual es 26/2/2019 la edad de esa persona es 18 ya que los 19 recién los cumple en diciembre. 
	Ejemplo 2. Si se ingresa como fecha de nacimiento: 3/1/2000 y la fecha actual es 26/2/2019 la edad de esa persona es 19. 
	Ejemplo 3. Si se ingresa como fecha de nacimiento: 28/2/2000 y la fecha actual es 26/2/2019 la edad de esa persona es 18 ya que le faltan 2 días para cumplir los 19 años.
	*/
	
	int diaActual, mesActual, anioActual, diaNac, mesNac, anioNac, edad;
	
	cout << "Ingrese su fecha de Nacimiento." << endl;
	cout << "Dia: ";
	cin >> diaNac;
	cout << "Mes: ";
	cin >> mesNac;
	cout << "Anio: ";
	cin >>anioNac;
	
	cout << "Ingrese la fecha actual." << endl;
	cout << "Dia: ";
	cin >> diaActual;
	cout << "Mes: ";
	cin >> mesActual;
	cout << "Anio: ";
	cin >> anioActual;
	
	if(mesNac <=mesActual && diaNac <= diaActual ){
		edad = anioActual - anioNac;
	}
	else{
		edad --;
	}
	
	cout << "Edad: " << edad;
	return 0;
}

