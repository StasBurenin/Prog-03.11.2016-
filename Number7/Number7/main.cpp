#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	float x[5];
	int k = 0;
	cout << "¬ведите 5 чисел " << endl;
	for (int i = 0; i < 5; i++) {
		cout << i + 1 << " число" << endl;
		cin >> x[i];
		if (x[i] > 0) {
			k = k + 1;
		}
	}
	cout << k << endl;
	system("pause");
	return 0;
}