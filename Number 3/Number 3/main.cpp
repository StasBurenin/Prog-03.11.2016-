#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	int x,y;
	cout << "¬ведите число - ";
	cin >> x;
	cout << "¬ведите степень числа - ";
	cin >> y;
	cout << "„исло в степени = " << pow(x, y) << endl;

	system("pause");
	return 0;
}