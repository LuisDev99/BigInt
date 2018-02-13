#include "BigInt.h"
#include <iostream>

using namespace std;

BigInt::BigInt() {

}

BigInt::~BigInt() {


}

BigInt operator+(const BigInt &a, const BigInt&b) {
	BigInt res;
	for (int i = 0; i < 10; i++) {
		res.entero[i] = a.entero[i] + b.entero[i];
	}
	return res;
}

BigInt operator-(const BigInt &a, const BigInt&b) {
	BigInt res;
	for (int i = 0; i < 10; i++) {
		res.entero[i] = a.entero[i] - b.entero[i];
	}
	return res;
}

istream &operator>>(istream &input, BigInt &a) {
	for (int i = 0; i < 10; i++) {
		input >> a.entero[i];
	}
	return input;
}

ostream &operator<<(ostream &output, const BigInt &a) {
	for (int i = 0; i < 10; i++) {
		output << a.entero[i];
	}
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



