// 배열 days[] 초기화하고 배열 원소의 값을 출력하는 프로그램
#include <iostream>
using namespace std;

int main(void) {
	const int day = 12;
	int days[day] = { 31,29,31,30,31,30,31,31,30,31,30,31 };

	for (int i = 0; i < day; i++) {
		cout << i + 1 << "월은 " << days[i] << "일까지 있습니다." << endl;
	}
	return 0;
}