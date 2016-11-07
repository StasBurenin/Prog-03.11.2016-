#include <iostream>
#include "stdlib.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	int ran, x;
	const int n = 5;

	ran = rand() % 10;
	cout << "У Вас есть 5 попыток" << endl;

	for (int i = 0; i < n; i++) {
		cout << "Введите число = ";
		cin >> x;

		if (x == ran) {
			cout << "Вы угадали число с " << i+1 << " попытки" << endl;
			system("pause");
			return 0;
		}
		else {
			cout << "Попробуйте еще раз" << endl;
		}
	}
	cout << "Загаданное число = " << ran;
	system("pause");
	return 0;
}