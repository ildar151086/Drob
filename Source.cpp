/*
���������� ����� �����.
���������� ������� ��������� � ����������� � �������� ���������� ������.
����������� ������� ����� ��� ����� ������ � ���������� ��� ���������� ��������������� ��������
*/
#include <iostream>

using namespace std;

class Drob {
	private:		
		int numerator; // ���������
		int denominator; // �����������
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
			cout << "����� \t"     << summ() << endl;
			cout << "�������� \t"  << sub() << endl;
			cout << "������� \t"   << div() << endl;
			cout << "��������� \t" << mult() << endl;
		}
};

int main() {
	setlocale(LC_ALL, "RUS");

	Drob drobFirst(10, 15);

	cout << "����� \t"     << drobFirst.summ() << endl;
	cout << "�������� \t"  << drobFirst.sub() << endl;
	cout << "������� \t"   << drobFirst.div() << endl;
	cout << "��������� \t" << drobFirst.mult() << endl;

	Drob drobSecond;

	drobSecond.setDenominator(15);
	drobSecond.setNumerator(10);
	drobSecond.allCalc();

	return 0;
}