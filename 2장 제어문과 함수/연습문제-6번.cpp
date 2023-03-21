// 월급에 붙는 소득세 계산 프로그램
// 과표 구간은 1000만원 이하 8%
// 1000만원 초과 4000만원 이하 17%
// 4000만원 초과 8000만원 이하 26%
// 8000만원 초과 35%
// 사용자로부터 소득을 입력받아 소득의 구간에 따라 세금을 계산하는 함수 get_tex() 작성하고 테스트하는 프로그램 작성

#include <iostream>
using namespace std;
void get_tex(int money);

int main(void) {
	int money;
	cout << "소득을 입력하시오: ";
	cin >> money;

	get_tex(money);

	return 0;
}

void get_tex(int money) {
	if (money <= 1000) {
		money = money + ((money/100)*8);
	}
	else if (money > 1000 && money <= 4000) {
		money = money + ((money / 100) * 17);
	}
	else if (money > 4000 && money <= 8000) {
		money = money + ((money / 100) * 26);
	}
	else {
		money = money + ((money / 100) * 35);
	}
	cout << "당신의 소득세는 " << money << "입니다." << endl;
}