#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	int x;
	cout << "¬ведите число - ";
	cin >> x;
	if (x > 0) {
		x = x * 2;
	}
	else if (x < 0) {
		x = x - 3;
	}
	else {
		x = 10;
	}
	cout << "x = " << x << endl;
	system("pause");
	return 0;

}