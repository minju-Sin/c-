//행 합, 열 합을  구하는 프로그램 
#include <iostream>
using namespace std;
void p5();
void sum_Row(int Matrix[][5], int row);
void sum_Col(int Matrix[][5], int row);

int main() {
	p5();
	return 0;
}

void p5() {
	const int row = 3;
	const int col = 5;
	int Matrix[row][col] 
		= { {12, 56, 32, 16, 98},
			{99, 56, 34, 41, 3},
			{65, 3, 87, 78, 21} };

	sum_Row(Matrix, row);
	sum_Col(Matrix, row);
}

void sum_Row(int Matrix[][5], int row) {
	int Rsum = 0;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < 5; j++) {
			Rsum += Matrix[i][j];
		}
		cout << i + 1 << "행의 합: " << Rsum << endl;
		Rsum = 0;
	}
}

void sum_Col(int Matrix[][5], int row) {
	int Csum = 0;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < row; j++) {
			Csum += Matrix[j][i];
		}
		cout << i + 1 << "열의 합: " << Csum << endl;
		Csum = 0;
	}
}