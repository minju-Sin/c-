// TIC TAC TOC GAME
// 2���� �迭�� ���Ұ� 0�̸� ���� ������ ���� ���̰� 1�̸� �� 2�̸� ���� ǥ���Ѵٰ� ����
#include <iostream>
using namespace std;

int main() {
	const int row = 3;
	const int col = 3;
	int game[row][col] = { {0,1,0},{2,1,0},{0,2,0} };
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			if (game[i][j] == 0) {
				cout << " " << " ";
			}
			else if (game[i][j] == 1) {
				cout << "o" << " ";
			}
			else cout << "x" << " ";
		}
		cout << endl;
	}
	return 0;
}