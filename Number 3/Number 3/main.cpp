#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	int x,y;
	cout << "������� ����� - ";
	cin >> x;
	cout << "������� ������� ����� - ";
	cin >> y;
	cout << "����� � ������� = " << pow(x, y) << endl;

	system("pause");
	return 0;
}