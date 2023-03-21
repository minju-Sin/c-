//구의 표면적과 체적을 구하는 프로그램
//구의 반지름은 실수로 입력됨

#include <iostream>
#include <math.h>
#define PI 3.14
using namespace std;

int main(void) {
	double r, A, V; //반지름
	
	cout << "구의 반지름을 입력하세요:";
	cin >> r;
	
	A = 4 * PI * pow(r, 2);
	V = (A * r) / 3;

	cout << "구의 표면적은 " << A << ", 구의 체적은 " << V << "입니다." << endl;

	return 0;
}