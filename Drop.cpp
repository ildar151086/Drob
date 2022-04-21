#include "Drob.h"

using namespace std;

Drob::Drob(int valueNum = 0, int valueDenom = 1) {
	setNumerator(valueNum);
	setDenominator(valueDenom);
}
Drob::Drob() {
	setNumerator(0);
	setDenominator(1);
}
void Drob::setNumerator(int value) {
	Drob::numerator = value;
}
void Drob::setDenominator(int value) {
	value = (value == 0) ? 1 : value;
	denominator = value;
}
int Drob::summ() {
	return numerator + denominator;
}
int Drob::sub() {
	return numerator - denominator;
}
double Drob::div() {
	return (numerator / denominator);
}
int Drob::mult() {
	return numerator * denominator;
}
void Drob::allCalc() {
	std::cout << "Сумма \t" << summ() << endl;
	std::cout << "Разность \t" << sub() << endl;
	std::cout << "Деление \t" << div() << endl;
	std::cout << "Умножение \t" << mult() << endl;
}
void Drob::show() {
	std::cout << endl;
	std::cout << "numerator \t" << numerator << endl;
	std::cout << "denominator \t" << denominator << endl;
	}
