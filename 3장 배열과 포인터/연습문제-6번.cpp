// 두 개의 정수 배열 a,b를 받아 대응되는 배열 원소가 같은지 검사하는 프로그램
// array_equal(int a[], int b[], int size) 함수 이용
// a[0] == b[0] , a[n] == b[n] 이렇게 같으면 1 출력 아니면 0 출력
#include <iostream>
using namespace std;
void array_a(int a[], int size);
void array_b(int b[], int size);
void array_equal(int a[], int b[], int size);

int main() {
	const int size = 5;
	int a[size] = { 0 };
	int b[size] = { 0 };
	array_a(a, size);
	array_b(b, size);
	array_equal(a, b, size);
	return 0;
}
void array_a(int a[], int size) {
	cout << "정수배열 a의 값" << endl;
	for (int i = 0; i < size; i++) {
		cin >> a[i];
	}
}
void array_b(int b[], int size) {
	cout << "정수배열 b의 값" << endl;
	for (int i = 0; i < size; i++) {
		cin >> b[i];
	}
}
void array_equal(int a[], int b[], int size) {
	cout << "결과: ";
	for (int i = 0; i < size; i++) {
		if (a[i] != b[i]) {
			cout << "0 ";
		}
		else cout << "1 ";
	}
}