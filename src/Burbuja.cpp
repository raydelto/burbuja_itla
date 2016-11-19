//============================================================================
// Name        : Burbuja.cpp
// Author      : Raydelto
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int numeros[] = { 1,2,3,4,5,6,7 };
int tamano = sizeof(numeros) / sizeof(int);

void imprimir(){
	for(int i = 0 ; i < tamano ; i++){
		cout << numeros[i] << endl;
	}
}


void burbuja(){
	int aux = 0;
	bool intercambio = true;
	int vueltas = 0;
	while(intercambio){
		intercambio = false;
		for(int j = 0 ; j < tamano - 1 ; j++ ){
			vueltas++;
			if(numeros[j] < numeros[j+1]){
				intercambio = true;
				aux = numeros[j];
				numeros[j] = numeros[j + 1];
				numeros[j + 1] = aux;
			}
		}
	}

	cout << "Se han dado " << vueltas << " vueltas" << endl;

}


int main() {
	cout << "Arreglo desordenado" << endl;
	imprimir();
	cout << "Arreglo ordenado" << endl;
	burbuja();
	imprimir();
	return 0;
}
