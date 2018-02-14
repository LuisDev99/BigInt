#include <iostream>
#include "BigInt.h"
using namespace std;


int main() {
	BigInt a, b, resSuma, resResta;
	bool igualIgual, diferenteDe;
	int x, y;

	cout << "Ingrese el gran entero 1: ";
	cin >> a;

	cout << x;

	cout << "Ingrese el gran entero 2: ";
	cin >> b;

	resSuma = a + b;

	cout << "Resultado sobrecargado de la suma de las posiciones de los dos arreglos es: "<< resSuma << endl;

	resResta = a - b; 

	cout << "Resultado sobrecargado de la resta de las posiciones de los dos arreglos es: " << resResta << endl;

	igualIgual = (a == b);

	cout << "(Usando la sobrecarga en el operador == )Los arreglos: " << ((igualIgual) ? "Son iguales " : "No son iguales ") << endl;

	diferenteDe = (a != b);

	cout << "(Usando la sobrecarga en el operador != )Los arreglos: " << ((diferenteDe) ? "Si son diferentes " : "No son diferentes ") << endl;



	system("pause");

}