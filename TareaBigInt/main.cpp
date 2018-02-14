#include <iostream>
#include "BigInt.h"
using namespace std;


int main() {
	BigInt a, b, resSuma, resResta;
	bool igualIgual, diferenteDe, mayor, menor, mIgual, mnIgual;

	cout << "Ingrese el gran entero 1: ";
	cin >> a;


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

	mayor = (a > b);

	cout << "(Usando la sobrecarga en el operador > )El 1 es: " << ((mayor) ? "Mayor" : "Menor") << endl;

	menor = (a < b);

	cout << "(Usando la sobrecarga en el operador < )El 2 es : " << ((menor) ? "Mayor " : "Menor ") << endl;

	mIgual = (a >= b);

	cout << "(Usando la sobrecarga en el operador >= )El 1 es: " << ((mIgual) ? "Mayor o igual" : "Menor") << endl;

	mnIgual = (a <= b);

	cout << "(Usando la sobrecarga en el operador <= )El 1 es: " << ((mnIgual) ? "Si es Menor o igual" : "Mayor") << endl;

	system("pause");

}