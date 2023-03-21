// 즉석 복권 프로그램
// 복권의 번호 1부터 100사이 rand()함수 호출하여 생성
// 사용자로부터 번호를 받아 당첨 여부를 판단하는 프로그램 작성
// 당첨 번호를 생성하는 함수 get_number()
// 당첨 여부를 판별하는 함수 is_winning_ticket()

#include <iostream>
#include <random>
using namespace std;
void get_number(int num2);
void is_winning_ticket(int num1, int num2);

int main() {
	int num1, num2  = 0;
	cout << "복권의 번호를 입력하세요: ";
	cin >> num1;

	get_number(num2);
	is_winning_ticket(num1, num2);

	return 0;
}

void get_number(int num2) {
	for (int i = 1; i <= 100; i++) {
		num2 = rand() % 100 + 1;
	}
}

void is_winning_ticket(int num1, int num2) {
	if (num1 == num2) {
		cout << "당첨되었습니다!" << endl;
	}
	else cout << "당첨되지 않았습니다." << endl;
}