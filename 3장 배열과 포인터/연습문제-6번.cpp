// �� ���� ���� �迭 a,b�� �޾� �����Ǵ� �迭 ���Ұ� ������ �˻��ϴ� ���α׷�
// array_equal(int a[], int b[], int size) �Լ� �̿�
// a[0] == b[0] , a[n] == b[n] �̷��� ������ 1 ��� �ƴϸ� 0 ���
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
	cout << "�����迭 a�� ��" << endl;
	for (int i = 0; i < size; i++) {
		cin >> a[i];
	}
}
void array_b(int b[], int size) {
	cout << "�����迭 b�� ��" << endl;
	for (int i = 0; i < size; i++) {
		cin >> b[i];
	}
}
void array_equal(int a[], int b[], int size) {
	cout << "���: ";
	for (int i = 0; i < size; i++) {
		if (a[i] != b[i]) {
			cout << "0 ";
		}
		else cout << "1 ";
	}
}