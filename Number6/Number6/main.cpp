#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	int c,f,k;
	
	cout << "������� ����������� � �������� ������� = ";
	cin >> c;
	cout << "����������� � �������� ������� = " << c << endl;

	f =( c * (9 / 5)) + 32;
	cout << "����������� � �������� ���������� = " << f << endl;

	k = c + 273;
	cout << "����������� � �������� �������� = " << k << endl;

	system("pause");
	return 0;
}