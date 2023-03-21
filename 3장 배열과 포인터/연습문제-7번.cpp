// TIC TAC TOC GAME
// 2차원 배열의 원소가 0이면 아직 놓이지 않은 것이고 1이면 ○ 2이면 ×를 표시한다고 가정
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