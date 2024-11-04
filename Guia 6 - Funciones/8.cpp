//Escribir una función que reciba el valor de un año y retorne 1 si el mismo es bisiesto y 0 si es un año no bisiesto. 
//Recordar que son años bisiestos los divisibles por 4, excepto los divisibles por 100, pero dentro de este grupo se incluyen los divisibles por 400. 
//Por ejemplo 1992 fue bisiesto por ser divisible por 4. 
//El año 1900 no fue bisiesto por ser divisible por 100, aun siendo divisible por 4. 
//Y el año 2000 fue bisiesto por ser divisible por 400, aun siendo divisible por 100.
//Hacer un programa para ingresar una lista de 10 valores de años y contar cuantos son bisiestos. Utilizar la función solicitada.

#include <iostream>
using namespace std;

int anioBisiesto (int n){
	return (n % 4 == 0 && n % 100 != 0) || (n % 400 == 0);
}

int main() {
	int  num, cuentaAnios=0;
	
	for (int i =1 ; i <= 10; i++){
		cout << "Ingresar anio: ";
		cin >> num;
		cuentaAnios += anioBisiesto(num);
	}
	
	cout << "Cantidad de anios bisiesto listados: " << cuentaAnios << endl;
	return 0;
}

