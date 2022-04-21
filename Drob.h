#pragma once
#include <iostream>
using namespace std;

class Drob {
private:
	int numerator; // Числитель
	int denominator; // Знаменатель
public:
	Drob(int ,int);
	Drob();
	void setNumerator(int);
	void setDenominator(int value);
	void allCalc();
	void show();
	int summ();
	int sub();
	int mult();
	double div();
	Drob operator+ (Drob second) {
		Drob temp;
		temp.numerator = numerator + second.numerator;
		temp.denominator = denominator + second.denominator;
		return temp;
	}
	Drob operator= (Drob second) {
		numerator = second.numerator;
		denominator = second.denominator;
		return *this;
	}
};