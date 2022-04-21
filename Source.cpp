/*
���������� ����� �����.
���������� ������� ��������� � ����������� � �������� ���������� ������.
����������� ������� ����� ��� ����� ������ � ���������� ��� ���������� ��������������� ��������
*/
#include <iostream>
#include "Drob.h"




int main() {
	setlocale(LC_ALL, "RUS");

	Drob drobFirst(1, 1);
	drobFirst.show();
	drobFirst.allCalc();

	Drob drobSecond;
	drobSecond.setDenominator(2);
	drobSecond.setNumerator(2);
	drobSecond.show();
	drobSecond.allCalc();

	Drob drobTree(5, 5);
	drobTree.show();
	drobTree.allCalc();

	drobTree = drobFirst + drobSecond;
    drobTree.show();
	drobTree.allCalc();

	return 0;
}