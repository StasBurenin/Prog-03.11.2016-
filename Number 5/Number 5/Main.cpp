#include <iostream>
#include "stdlib.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	int ran, x;
	const int n = 5;

	ran = rand() % 10;
	cout << "� ��� ���� 5 �������" << endl;

	for (int i = 0; i < n; i++) {
		cout << "������� ����� = ";
		cin >> x;

		if (x == ran) {
			cout << "�� ������� ����� � " << i+1 << " �������" << endl;
			system("pause");
			return 0;
		}
		else {
			cout << "���������� ��� ���" << endl;
		}
	}
	cout << "���������� ����� = " << ran;
	system("pause");
	return 0;
}