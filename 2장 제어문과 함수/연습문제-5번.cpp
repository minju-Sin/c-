// 컴퓨터와 가위바위보 게임을 하는 프로그램
// 컴퓨터는 사용자에게 알리지 않고 가위바위보 중에서 임의로 하나 선택
// 사용자는 프로그램의 입력 안내 메세지에 따라 세 개 중에서 하나 선택
// 사용자의 선택이 끝나면 컴퓨터는 누가 무엇을 선택하였고 누가 이겼는지, 비겼는지를 알려줌

#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main(void) {
	int user;
	int computer = 0;

	srand((unsigned int)time(NULL));

	cout << "가위(0), 바위(1), 보(2) 중 하나를 선택하시오: ";
	cin >> user;

	switch (user) {
		case 0:
			cout << "나의 선택: 가위" << endl;
			user = 0;
			break;
		case 1:
			cout << "나의 선택: 바위" << endl;
			user = 1;
			break;
		case 2:
			cout << "나의 선택: 보" << endl;
			user = 2;
			break;
		default:
			break;
	}
	computer = rand() % 3 + 1;

	switch (computer) {
		case 0:
			cout << "컴퓨터의 선택 : 가위" << endl;
			computer = 0;
			break;
		case 1:
			cout << "컴퓨터의 선택: 바위" << endl;
			computer = 1;
			break;
		case 2:
			cout << "컴퓨터의 선택: 보" << endl;
			computer = 2;
			break;
		default:
			break;
	}
	if (user == computer) cout << "비겼습니다." << endl;
	else if ((user == 0 && computer == 2) || (user == 1 && computer == 0) || (user == 2 && computer == 1)) {
		cout << "이겼습니다." << endl;
	}
	else if ((user == 0 && computer == 1) || (user == 1 && computer == 2) || (user == 2 && computer == 0)) {
		cout << "졌습니다." << endl;
	}
	else cout << "다시 입력하세요" << endl;

	return 0;
}