#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	int c,f,k;
	
	cout << "Введите температуру в градусах Цельсия = ";
	cin >> c;
	cout << "Температура в градусах цельсия = " << c << endl;

	f =( c * (9 / 5)) + 32;
	cout << "Температура в градусах Фаренгейта = " << f << endl;

	k = c + 273;
	cout << "Температура в градусах Кельвина = " << k << endl;

	system("pause");
	return 0;
}