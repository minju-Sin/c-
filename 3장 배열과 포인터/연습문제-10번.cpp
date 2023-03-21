// 배열 A[]에서 주어진 숫자를 탐색하여 
// 숫자를 가리키는 포인터를 반환하는 다음과 같은 원형을 가지는 함수를 작성하고 테스트하라.
//int* search(int* A, int n, int x);

#include <iostream>
using namespace std;
int* search(int* A, int n, int x);

int main() {
	const int n = 5;
	int x, * num;
	int A[n] = { 1,2,3,4,5 };
	cout << "탐색하고 싶은 숫자를 입력하세요: ";
	cin >> x;
	num = search(A, n, x);
	cout << *num << endl;
	return 0;
}

int* search(int* A, int n, int x) {
	for (int i = 0; i < n; i++) {
		if (A[i] == x) {
			return &A[i];
		}
	}
	return 0;
}