//switch�� ����Ͽ� Ű����κ��� �ϳ��� ���ڸ� �а�
//�ǹ���(\t), �ٹ���(\n), �齺���̽�(\) �������� ����ϴ� ���α׷�
//�� �����̸� "�ǹ���"�� ���

#include <iostream>
#include <string.h>
using namespace std;

int main(void) {
	char word;

	cout << "���ڸ� �Է��Ͻÿ�: ";
	cin >> word;

	switch (word) {
		case '\\t':
			cout << "�ǹ���" << endl;
			break;
		case '\\n':
			cout << "�ٹ���" << endl;
			break;
		case '\\b':
			cout << "�齺���̽� ����" << endl;
			break;
		default:
			break;
	}
	return 0;
}