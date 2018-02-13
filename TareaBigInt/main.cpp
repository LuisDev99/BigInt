#include <iostream>
#include "BigInt.h"
using namespace std;


int main() {
	BigInt a, b, resSuma, resResta;
	bool igualIgual, diferenteDe;

	cout << "Ingrese 10 valores porfavor: ";
	cin >> a;

	cout << "Ingrese otros 10 valores porfavor para el otro arreglo: ";
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