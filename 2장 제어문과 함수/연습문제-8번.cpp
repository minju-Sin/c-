// 주어진 정수가 소수인지 검사하는 함수 prime()을 작성
// 1부터 100 사이에 존재하는 소수들을 모두 출력
// 소수라면 1과 자기 자신을 제외한 약수를 가지면 안된다.
// 정수 n이 소수인지 검사하려면 2부터 n-1까지의 숫자로 n을 나누어서 나누어 떨어지지 않으면 소수이다.

#include <iostream>
using namespace std;
void prime();

int main(void) {
	cout << "주어진 정수가 소수인지 검사하는 프로그램" << endl;
	prime();
	return 0;
}

void prime() {
	int n, i;
	for (n = 2; n <= 100; n++) {
		for (i = 2; i <= n; i++) {
			if (n % i == 0) break;
		}
		if (i == n) {
			cout << n << " ";
		}
	}
}