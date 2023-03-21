//사용자로부터 세 개의 정수를 읽고 if-else문을 사용하여 가장 작은 값을 결정하는 프로그램
//함수 get_minimum(x1, x2, x3)이용 

#include <iostream>
using namespace std;
void get_minimum(int x1, int x2, int x3);
int main(void) {
	int x1, x2, x3;
	cout << "세 개의 정수를 입력하시오: ";
	cin >> x1 >> x2 >> x3;

	get_minimum(x1, x2, x3);

	return 0;
}

void get_minimum(int x1, int x2, int x3) {
	if (x1 < x2) {
		if (x1 < x3) {
			cout << x1 << "이 가장 작다" << endl;
		}
		else cout << x3 << "이 가장 작다" << endl;
	}
	else {
		if (x2 < x3) {
			cout << x2 << "이 가장 작다" << endl;
		}
		else cout << x3 << "이 가장 작다" << endl;
	}
}