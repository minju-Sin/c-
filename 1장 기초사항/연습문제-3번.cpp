// cm로 표현된 키를 입력하여 피트와 인치로 변환하는 프로그램
#include <iostream>
using namespace std;

int main(void) {
	const double feet = 12;
	const double inch = 2.54;

	double height, ft, ih;

	cout << "키를 입력하세요: ";
	cin >> height;

	ft = (int)(height / inch / feet);
	ih = (height - ft * inch * feet) / inch;

	

	cout << height << "cm는 " << ft << "피트 " << ih << "인치입니다." << endl;

	return 0;
}
