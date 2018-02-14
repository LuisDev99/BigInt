#include "BigInt.h"
#include <iostream>

using namespace std;

BigInt::BigInt() {
	int tamaño = 10;
	for (int i = 0; i < tamaño; i++) {
		n[i] = 'a';
		entero[i] = 0;
	}

}

BigInt::~BigInt() {


}

BigInt operator+(const BigInt &a, const BigInt&b) {
	BigInt res;
	int limite = 10, resp = 0, div = 0;
	for (int i = 10; i > 0; i--) {
		div = resp = 0;
		div = (a.entero[i] + b.entero[i]);
		if ((a.entero[i] + b.entero[i]) == 10) {
			resp = 1;
		}
		else if ((a.entero[i] + b.entero[i]) > 10 ){
			resp = 1;
			div = (a.entero[i] + b.entero[i]) - limite;
		}
		
		res.entero[i] = div;
		res.entero[i - 1] += resp;

	}
	
	return res;
}

BigInt operator-(const BigInt &a, const BigInt&b) {
	BigInt res;
	for (int i = 10; i >= 0; i--) {
		res.entero[i] = a.entero[i] - b.entero[i];
	}
	return res;
}

istream &operator>>(istream &input, BigInt &a) {
	input >> a.n;
	int tamaño = 10;
	int final_arreglo = tamaño - 1;
	for (int i = 10-1; i >= 0; i--) {

		switch (a.n[i]) {
		case '0':
			a.entero[final_arreglo] = 0;
			break;
		case '1':
			a.entero[final_arreglo] = 1;
			break;
		case '2':
			a.entero[final_arreglo] = 2;
			break;
		case '3':
			a.entero[final_arreglo] = 3;
			break;
		case '4':
			a.entero[final_arreglo] = 4;
			break;
		case '5':
			a.entero[final_arreglo] = 5;
			break;
		case '6':
			a.entero[final_arreglo] = 6;
			break;
		case '7':
			a.entero[final_arreglo] = 7;
			break;
		case '8':
			a.entero[final_arreglo] = 8;
			break;
		case '9':
			a.entero[final_arreglo] = 9;
			break;
		}
		final_arreglo--;
	}
	return input;
}

ostream &operator<<(ostream &output, const BigInt &a) {
	for (int i = 0; i < 10; i++) {
		output << a.entero[i];
	}

	/*for (int i = 0; i < strlen(a.n); i++) {
		output << a.entero[10 - strlen(a.n) + i];
	}*/

	
	return output;
}

bool operator==(const BigInt &a, const BigInt &b) {
	for (int i = 0; i < 10; i++) {
		if (a.entero[i] != b.entero[i])
			return false;
	}
	return true;
}

bool operator!=(const BigInt &a, const BigInt &b) {
	for (int i = 0; i < 10; i++) {
		if (a.entero[i] != b.entero[i])
			return true;
	}
	return false;
}

bool operator>=(const BigInt &a, const BigInt &b) {
	if (*a.entero >= *b.entero)
		return true;
	return false;
}

bool operator<=(const BigInt &a, const BigInt &b) {
	if (*a.entero <= *b.entero)
		return true;
	return false;
}

bool operator>(const BigInt &a, const BigInt &b) {
	
	if (a.entero[0] > b.entero[0])
		return true;
	return false;
}

bool operator<(const BigInt &a, const BigInt &b) {
	if (a.entero[0] < b.entero[0])
		return true;
	return false;
}


