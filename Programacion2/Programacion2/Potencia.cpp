#include "Potencia.h"
#include <iostream>
#include <fstream> 

void Potencia::calcularPotencia() {
	for (int i = 0; i < exponente; i++) {
		resultado = resultado * base; 
	}
	cout << "El resultado de " << base << " elevado a la " << exponente << " es: " << resultado << endl;
}