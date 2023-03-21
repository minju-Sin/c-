// 사용자로부터 데이터를 입력받아 평균, 최대값, 최소값을 구하는 프로그램
// 음수가 입력되면 데이터의 끝이라고 간주한다.

#include <iostream>
#include <limits.h>
using namespace std;

int average(int sum, int count);
int get_max(int num, int max);
int get_min(int num, int min);
int main() {
	int num;
	int count = 0;
	int sum = 0;
	int max = INT_MAX;
	int min = INT_MIN;
	if (count == 1) { //음수만 입력되었을 떼 최대 최소는 0임 
		max = 0;
		min = 0;
	}
	while (1) {
		cout << "데이터를 입력하시오(음수이면 종료): ";
		cin >> num;

		if (num < 0) { //음수 입력되면 break문으로 빠져나옴 
			break;
			count++;
		}

		sum += num;
		get_min(num, min);
		get_max(num, max);
	}
	cout << "평균은 " << average(sum, count) << "입니다." << endl;
	cout << "최소값은 " << min << "입니다." << endl;
	cout << "최대값은 " << max << "입니다." << endl;

	return 0;
}

int average(int sum, int count) {
	return sum / count;
}

int get_max(int num, int max) {
	if (num > max)
		return num;
	else return max;
}

int get_min(int num, int min) {
	if (num < min)
		return num;
	else return min;
}