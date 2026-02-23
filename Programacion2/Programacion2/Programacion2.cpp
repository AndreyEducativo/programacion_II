//Primer ejercicio de clases. Hacer una division sin usar el operador de division.

/*
#include <iostream>
using namespace std; 
int main()
{
	int dividendo, divisor, resultado = 0, residuo = 0, numero; 

	cout<< "Ingrese el dividendo: ";
	cin >> dividendo;
	cout << endl; 
	cout<< "Ingrese el divisor: ";
	cin >> divisor;
	cout << endl; 
	cout << "Ingrese un numero que multiplicado por " << divisor << " me de o se acerque al " << dividendo << ": ";
	cin >> numero;
	cout << endl;

	resultado = divisor * numero;

	if (divisor == 0)
	{
		cout << "No se puede dividir por cero." << endl;
		return 0; 
	} 
	if (resultado > dividendo) {
		cout << "El numero que ingreso es muy grande, ingrese otro valor..." << endl;

	}
	else if (resultado < dividendo) {
		residuo = dividendo - resultado; 
		cout << "El residuo de la division es: " << residuo << endl; 
		cout << "El resultado de la division es: " << numero << endl;
	}

	return 0;
}
*/


/*Segundo ejercicio de clases.Cree una solución que calcule la potencia de un conjunto de números sin utilizar
la función pow()*/

#include <iostream>
#include "Potencia.h"

using namespace std; 

int main() {
	int b, e;
	cout << "Ingrese la base: ";
	cin >> b;
	cout << "Ingrese el exponente: ";
	cin >> e;

	Potencia p(b, e);
	p.calcularPotencia();

	return 0; 
}