#include <iostream>
using namespace std;

int main() {
	int fMatrix[3][2] = { { 1, 1 },{ 2, 2 },{ 3, 6 } };
	int sMatrix[2][3] = { { 7, 13, 9 },{ 10, 19, 12 } };
	int product[3][3] = { { 0, 0, 0 },{ 0, 0, 0 },{ 0, 0, 0 } };

	for (int row = 0; row < 3; row++) {
		for (int col = 0; col < 3; col++) {

			for (int i = 0; i < 2; i++) {
				product[row][col] += fMatrix[row][i] * sMatrix[i][col];
			}
			cout << product[row][col] << "  ";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}