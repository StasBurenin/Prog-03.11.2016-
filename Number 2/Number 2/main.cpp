#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL,"RUSSIAN");
	
	string s;
	cout << "Введите число в двочиной системе - ";
	cin >> s;
	int bit = 0;
	for (int i = s.length() - 1; i >= 0; i--)
		bit += (s[i] - '0')*pow(2.0, double(s.length() - i - 1));
	cout << "Число в десятичной системе - " << bit << endl;
	system("pause");
	return 0;
}