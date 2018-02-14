#pragma once
#include <iostream>
using namespace std;

class BigInt {

	friend BigInt operator+(const BigInt&, const BigInt&);
	friend BigInt operator-(const BigInt&, const BigInt&);
	friend istream &operator>>(istream &, BigInt &);
	friend ostream &operator<<(ostream &, const BigInt &);
	friend bool operator==(const BigInt&, const BigInt&);
	friend bool operator!=(const BigInt&, const BigInt&);
	friend bool operator>=(const BigInt&, const BigInt&);
	friend bool operator<=(const BigInt&, const BigInt&);
	friend bool operator>(const BigInt&, const BigInt&);
	friend bool operator<(const BigInt&, const BigInt&);



public:
	BigInt();
	~BigInt();

private:
	int entero[10];
	char n[10];
	
};
