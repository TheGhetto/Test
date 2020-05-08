#include <iostream>
#include "Encabezados.h"

#define CANT_MAX 10

using namespace std;

int ingresarValor(int& valor) {
	cout << "Ingrese un valor: " ;
	cin >> valor;
	return valor;
}

void evaluarValor(int valor, int& suma, float& promedio) {
	int i(0);
	int cantMayores(0);
	while (i < CANT_MAX) {
		if (valor < -10) {
			suma += valor;
		}
		else {
			if (valor > 100) {
				promedio += valor;
				cantMayores++;
			}
		}
		cout << i << "\t";
		i++;
		ingresarValor(valor);
	}
	promedio = promedio / cantMayores;
}

void resolverEjercicio(int&valor,int& suma, float& promedio){
	evaluarValor(valor, suma, promedio);
	cout << "suma de valores menores a -10: " << suma << endl;
	cout << "promedio mayores de 100: " << promedio << endl;
}
