//string 타입 사용하는 프로그램

#include <iostream>
#include <string.h>
using namespace std;

int main(void) {
	string name, work;
	cout << "당신의 이름을 입력하시오: ";
	cin >> name;
	cout << name << "씨 무엇을 해드릴까요?" << endl;

	cout << "할일을 입력하시오: ";
	cin >> work;
	cout << work << "는 할 수 없습니다." << endl;

	return 0;
}