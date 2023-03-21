// 상자의 체적을 구하는 프로그램
// 상자의 크기는 200 x 200 x 200을 넘지 않는다.
// 변수의 크기를 최소로 설정 

#include <iostream>
using namespace std;
#define SIZE 200 

int main(void) {
	unsigned short length, width, height, size = 0;

	bool sw = true;

	while (sw) {
		cout << "상자의 길이, 너비, 높이를 입력하세요:" << endl;
		cin >> length >> width >> height;
		if (length > SIZE || width > SIZE || height > SIZE) {
			cout << "상자의 크기를 벗어났습니다." << endl;
		}
		else {
			sw = false;
		}
	}
	size = length * width * height;
	cout << "상자의 체적은 " << size << "입니다." << endl;

	return 0;
}
