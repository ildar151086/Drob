/*
Реализуйте класс Дробь.
Необходимо хранить числитель и знаменатель в качестве переменных членов.
Реализовать функции члены для ввода данных в переменные для выполнения арифметитчсеких операций
*/
#include <iostream>

using namespace std;

class Drob {
	private:		
		int numerator; // Числитель
		int denominator; // Знаменатель
	public:
		Drob(int valueNum = 1, int valueDenom = 1) {
			numerator   = valueNum;
			denominator = valueDenom;
		}
		void setNumerator(int value) {
			numerator = value;
		}
		void setDenominator(int value) {
			denominator = value;
		}
		int summ() {
			return numerator + denominator;
		}
		int sub() {
			return numerator - denominator;
		}
		int div() {
			if (denominator = !0) {
				return numerator / denominator;
			}
			return 0;
		}
		int mult() {
			return numerator * denominator;
		}
		void allCalc() {
			cout << "Сумма \t"     << summ() << endl;
			cout << "Разность \t"  << sub() << endl;
			cout << "Деление \t"   << div() << endl;
			cout << "Умножение \t" << mult() << endl;
		}
};

int main() {
	setlocale(LC_ALL, "RUS");

	Drob drobFirst(10, 15);

	cout << "Сумма \t"     << drobFirst.summ() << endl;
	cout << "Разность \t"  << drobFirst.sub() << endl;
	cout << "Деление \t"   << drobFirst.div() << endl;
	cout << "Умножение \t" << drobFirst.mult() << endl;

	Drob drobSecond;

	drobSecond.setDenominator(15);
	drobSecond.setNumerator(10);
	drobSecond.allCalc();

	return 0;
}