// 시,분,초로 표현된 시간을 초 단위의 시간으로 변환하는 프로그램

#include <iostream>
using namespace std;

int main(void) {
	const int hour = 60; //1시간은 60분
	const int minute = 60; //1분은 60초

	int hr, min, sec, total;
	cout << "시간을 입력하세요: ";
	cin >> hr >> min >> sec;

	total = (hr * hour * minute) + (min * minute) + sec;

	cout << total << "초 입니다." << endl;

	return 0;
}