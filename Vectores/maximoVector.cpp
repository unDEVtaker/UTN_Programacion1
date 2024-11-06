#include <iostream>
using namespace std;


//programa para cargar x elementos de un vector. Listar el vector.
//Calcular y mostrar el maximo valor del vector.

int BuscarMaximoValor(int vec[], int tamanio);
void CargarVector(int vec[], int tamanio);
void MostrarVector(int vec[], int tamanio);

int main(){
const int TAM = 5;
int vec[TAM], i, maxValor;

//cargo el vector
CargarVector(vec, TAM);

//muestro el vector
MostrarVector(vec,TAM);

//pido el maximo valor
maxValor = BuscarMaximoValor(vec, TAM);

cout << endl<< endl<< "El maximo es: " << maxValor;


//cout << endl << endl<< "Maximo valor ingresado: " << maxValor << endl;

return 0;

}

int BuscarMaximoValor(int vec[], int tamanio){
	int maxValor = vec[0];
	for(int i=1;i< tamanio; i++){
		if(vec[i] > maxValor){
			maxValor = vec[i];
		}
	}
	return maxValor;
}

void CargarVector(int vec[], int tamanio){
	cout << "Ingrese "<<tamanio<<   " numeros." << endl;
	for (int i=0; i<tamanio; i++){
	cin >> vec[i];
	}
}
void MostrarVector(int vec[], int tamanio){
	cout <<endl << endl << "Listado del vector:" << endl;
	for(int i =0 ; i<tamanio; i++){
		cout << vec[i] << " ";
	}
}

