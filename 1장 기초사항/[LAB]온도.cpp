//화씨 온도를 섭씨 온도로 바꾸는 프로그램

#include <iostream>
using namespace std;

int main(void) {
	const int temp = 32;
	int f_temp , c_temp;
	cout << "화씨 온도를 입력하시오: ";
	cin >> f_temp;

	c_temp = (5 * (f_temp - temp)) / 9;
	cout << "섭씨 온도는 " << c_temp << "도 입니다." << endl;

	return 0;
}