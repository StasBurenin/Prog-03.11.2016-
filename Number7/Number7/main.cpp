#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	int n;
	float s = 0;
	cout << "������� ���������� ��������� � ������� - ";
	cin >> n;
	float *arr = new float[n];
	int k = 0;
	cout << "������� " << n << " ����� " << endl;
	
	for (int i = 0; i < n; i++) {
		cout << i + 1 << " ����� = ";
		cin >> arr[i];
		
		if (arr[i] > 0) {
			k = k + 1;
			s = s + arr[i];
		}
	}
	
	cout << "���������� ������������� ����� � ������� = " << k << endl;
	cout << "������� �������������� ������������� ����� ������� = " << s / k << endl;
	
	system("pause");
	return 0;
}