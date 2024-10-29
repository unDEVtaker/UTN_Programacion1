#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	/*Un negocio de perfumería efectúa descuentos según el importe de la venta.
	Si el importe es menor a $100 aplicar un descuento del 5%
	Si el importe es entre $100 y hasta $500 aplicar un descuento del 10%
	Si el importe es mayor a $500 aplicar un descuento del 15%	
	Hacer un programa donde se ingresa el importe original sin descuento y se informe por pantalla el importe con el descuento ya aplicado.
	Importante: Verifique que el programa emita UN SOLO CARTEL.
	*/
	
	//necesito una varible para float para el importe, descuento, importeFinal
	
	float importe, descuento, importeFinal;
	
	//pido el importeTotal por teclado
	cout << "Vamos a calcular el descuento correspondiente." << endl;
	cout << "Ingrese la venta: ";
	cin >> importe; 
	
	//valido el importe y aplico descuento segun correspond
	if(importe < 100){
		importeFinal = importe - (importe * 0.05);
	}
	else if(importe >= 100 || importe <=500){
		importeFinal = importe - (importe * 0.10);		
	}
	else{
		importeFinal = importe - (importe * 0.15);	
	}
	
	cout << "El importe final: " << importeFinal;
	
	return 0;
}

