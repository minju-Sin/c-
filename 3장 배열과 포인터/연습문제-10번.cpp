// �迭 A[]���� �־��� ���ڸ� Ž���Ͽ� 
// ���ڸ� ����Ű�� �����͸� ��ȯ�ϴ� ������ ���� ������ ������ �Լ��� �ۼ��ϰ� �׽�Ʈ�϶�.
//int* search(int* A, int n, int x);

#include <iostream>
using namespace std;
int* search(int* A, int n, int x);

int main() {
	const int n = 5;
	int x, * num;
	int A[n] = { 1,2,3,4,5 };
	cout << "Ž���ϰ� ���� ���ڸ� �Է��ϼ���: ";
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