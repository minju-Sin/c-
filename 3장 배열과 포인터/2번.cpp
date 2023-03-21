// 두 개의 행렬을 더하는 프로그램 
#include <iostream>
using namespace std;
const int ROWS = 3;
const int COLS = 3;

int main() {
	int A[ROWS][COLS] = { {2, 3, 0},
						  {8, 9, 1},
						  {7, 0, 5}
	};
	int B[ROWS][COLS] = { {1, 0, 0},
						  {1, 0, 0},
						  {1, 0, 0}
	};
	int C[ROWS][COLS];
	int i, j;
	//두 개의 행렬을 더한다.
	for (i = 0; i < ROWS; i++) {
		for (j = 0; j < COLS; j++) {
			C[i][j] = A[i][j] + B[i][j];
		}
	}
	//행렬을 출력한다.
	for (i = 0; i < ROWS; i++) {
		for (j = 0; j < COLS; j++) {
			cout << C[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}