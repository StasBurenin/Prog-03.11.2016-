#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	int n;
	float s = 0;
	cout << "Введите количество элементов в массиве - ";
	cin >> n;
	float *arr = new float[n];
	int k = 0;
	cout << "Введите " << n << " чисел " << endl;
	
	for (int i = 0; i < n; i++) {
		cout << i + 1 << " число = ";
		cin >> arr[i];
		
		if (arr[i] > 0) {
			k = k + 1;
			s = s + arr[i];
		}
	}
	
	cout << "Количество положительных чисел в массиве = " << k << endl;
	cout << "Среднее арифметическое положительных чисел массива = " << s / k << endl;
	
	system("pause");
	return 0;
}