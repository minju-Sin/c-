// �л����� ������ �Է¹޾� ����� ���ϴ� ���α׷�


#include <iostream>
using namespace std;

int main() {
	const int STUDENTS = 10;
	int grade[STUDENTS];
	int sum = 0;
	int average;

	for (int i = 0; i < STUDENTS; i++) {
		cout << "�л����� ������ �Է��Ͻÿ�: ";
		cin >> grade[i];
		sum += grade[i];
		average = sum / STUDENTS;
	}
	cout << "���� ��� = " << average << endl;

	return 0;
}