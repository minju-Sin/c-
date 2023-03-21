// 각 변의 길이가 100보다 작은 삼각형 중에서 피타고라스의 정리가 성립하는 직각 삼각형의 개수 구하는 프로그램
// 삼중 반복문 이용하여 피타고라스의 정리를 만족하는 세개의 정수 찾기

#include <iostream>
#include <math.h>
using namespace std;

int main(void) {
	for (int a = 1; a < 100; a++) {
		for (int b = 1; b < 100; b++) {
			for (int c = 1; pow(c,2) < 100; c++) {
				if (pow(a, 2) + pow(b, 2) == pow(c, 2)) { //피타고라스 정리 성립
					cout << "a의 값: " << a << " b의 값: " << b << " c의 값 : " << c << endl;
				}
			}
		}
	}


	return 0;
}