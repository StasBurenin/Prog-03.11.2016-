#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
	setlocale(LC_ALL,"RUSSIAN");
	
	string str;
	cout << "Введите строку символов = ";
	cin >> str;
	cout << boolalpha << all_of(begin(str), end(str), ::isxdigit) << endl;

	system("pause");
	return 0;
}