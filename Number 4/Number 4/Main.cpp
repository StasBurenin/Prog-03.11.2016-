#include <iostream>
#include <cmath>

using namespace std;

int main() {
	setlocale(LC_ALL, "RUSSIAN");

	double D, a, b, c, f = 2, r, l;
	cout << "ax^+bx+c=0 \n";
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	cout << "c = ";
	cin >> c;
	D = pow(b, 2) - 4 * a*c;
	
	if (D > 0)
	{
		r = (-b + sqrt(D)) / 2 * a;
		l = (-b - sqrt(D)) / 2 * a;
		cout << "Первый корень = " << r << endl;
		cout << "Второй корень = " << l << endl;
	}else cout << "Ошибка!" << endl;
	
	system("pause");
	return 0;

}