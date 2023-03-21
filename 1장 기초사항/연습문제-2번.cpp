// 평을 평방미터로 환산하는 프로그램
// 기호상수 이용 const 

#include <iostream>
using namespace std;

int main(void) {
	const double meter = 3.3058; //1평
	int num;

	cout << "평 수를 입력하세요: ";
	cin >> num;

	cout << num << "평을 평방미터로 환산하면 " << num * meter << "입니다." << endl;

	return 0;
}