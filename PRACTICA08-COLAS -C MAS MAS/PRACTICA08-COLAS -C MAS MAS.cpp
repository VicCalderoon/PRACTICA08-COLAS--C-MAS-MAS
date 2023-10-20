// VICTOR CALDERON --> PRACTICA08-COLAS -C MAS MAS.cpp 
#include <iostream>
#define MaxTamC 10

typedef int TipoDato;
using namespace std;

int main()
{
	int frente = 0, final = 0;
	TipoDato A[MaxTamC];
	int contador = 0;
	
	frente = 0;
	final = 0;

	cout << "Desea agregar elementos a la cola? (s/n/): ";
	char respuesta;
	cin >> respuesta;

	while ((respuesta == 's' || respuesta == 'S') && contador < 10) {
		if ((final + 1) % MaxTamC == frente) {
			cout << "Desboradamiento de la cola   " << endl;
			return 1;
		}

		cout << "ingrese un elemento para la cola:   ";
		TipoDato elemento;
		cin >> elemento;

		final = (final + 1) % MaxTamC;
		A[final] = elemento;
		contador++;
		cout << "elemento  " << contador << "agregado a la cola:     " << elemento << endl;

		if (contador < 10) {
			cout << "Desea agregar mas elementos a la cola? (s/n):  ";
			cin >> respuesta;
		}
	}
	if (frente == final) {
		cout << "la cola esta vacia." << endl;
		return 1;
	}
	
	TipoDato primerelemento = A[(frente + 1) % MaxTamC];
	cout << "primer elemento de la cola es:    " << primerelemento << endl;

	frente = (frente + 1) % MaxTamC;

	cout << "elementos de la cola en el orden de ingreso: " << endl;
	for (int i = frente + 1; i <= final; i = (i + 1) % MaxTamC) {
		cout << A[i] << "    ";
	}
	cout << endl;
	
	return 0;
	
}

