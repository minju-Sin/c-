// 원의 반지름 입력 -> 면적 구하는 프로그램
// "계속하시겠습니까?(Y/N)" 질문 
// Y(y) => 반복 
// N(n) => 실행 중단 
#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main() {
	const double PI = 3.14;
	double r = 0;
	string check;

	while (1) {
		cout << "원의 반지름: ";
		cin >> r;
		cout << "원의 면적: ";
		cout << (pow(r, 2)) * PI << endl;
		cout << "계속하시겠습니까?(Y/N): ";
		cin >> check;
		if (check == "y" || check == "Y" || check == "n" || check == "N") {
			if (check == "n" || check == "N") {
				break;
			}
		}
		else break;
		
	}
	return 0;
}