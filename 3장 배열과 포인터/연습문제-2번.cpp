// 1���� �迭 => ����
// �� ���� ���͸� ���ϴ� �Լ� => vector_add()
#include <iostream>
using namespace std;
void vector_add(int vector1[], int vector, int vector2[]);

int main() {
	const int vector = 3;
	int vector1[vector] = { 0 }; //ù ��° ����
	int vector2[vector] = { 0 }; //�� ��° ���� 
	cout << "ù ��° ���͸� �Է��ϼ���: ";
	for (int i = 0; i < vector; i++) {
		cin >> vector1[i];
	}
	cout << "�� ��° ���͸� �Է��ϼ���: ";
	for (int i = 0; i < vector; i++) {
		cin >> vector2[i];
	}
	vector_add(vector1, vector, vector2);
	return 0;
}

void vector_add(int vector1[], int vector, int vector2[]) {
	int sum = 0; //�� 
	for (int sum = 0; sum < vector; sum++) {
		for (int i = 0; i < vector; i++) {
			sum = vector1[i] + vector2[i];
			cout << sum << " ";
		}
		cout << "�Դϴ�." << endl;
	}
}