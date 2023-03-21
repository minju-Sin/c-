#include<iostream>
using namespace std;
void p9();
void copy(int* A, int* B, int n);
int main() {
	p9();
	return 0;
}

void p9() {
	const int num = 3;
	int A[num] = { 1,2,3 };
	int B[num] = { 0 };

	copy(A, B, num);
	for (int i = 0; i < num; i++) {
		cout << B[i] << endl;
	}
	
}

void copy(int* A, int* B, int n) {
	for (int i = 0; i < n; i++) {
		B[i] = A[i]; //A 배열을 B에 복사
	}
}