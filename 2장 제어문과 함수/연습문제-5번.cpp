// ��ǻ�Ϳ� ���������� ������ �ϴ� ���α׷�
// ��ǻ�ʹ� ����ڿ��� �˸��� �ʰ� ���������� �߿��� ���Ƿ� �ϳ� ����
// ����ڴ� ���α׷��� �Է� �ȳ� �޼����� ���� �� �� �߿��� �ϳ� ����
// ������� ������ ������ ��ǻ�ʹ� ���� ������ �����Ͽ��� ���� �̰����, �������� �˷���

#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main(void) {
	int user;
	int computer = 0;

	srand((unsigned int)time(NULL));

	cout << "����(0), ����(1), ��(2) �� �ϳ��� �����Ͻÿ�: ";
	cin >> user;

	switch (user) {
		case 0:
			cout << "���� ����: ����" << endl;
			user = 0;
			break;
		case 1:
			cout << "���� ����: ����" << endl;
			user = 1;
			break;
		case 2:
			cout << "���� ����: ��" << endl;
			user = 2;
			break;
		default:
			break;
	}
	computer = rand() % 3 + 1;

	switch (computer) {
		case 0:
			cout << "��ǻ���� ���� : ����" << endl;
			computer = 0;
			break;
		case 1:
			cout << "��ǻ���� ����: ����" << endl;
			computer = 1;
			break;
		case 2:
			cout << "��ǻ���� ����: ��" << endl;
			computer = 2;
			break;
		default:
			break;
	}
	if (user == computer) cout << "�����ϴ�." << endl;
	else if ((user == 0 && computer == 2) || (user == 1 && computer == 0) || (user == 2 && computer == 1)) {
		cout << "�̰���ϴ�." << endl;
	}
	else if ((user == 0 && computer == 1) || (user == 1 && computer == 2) || (user == 2 && computer == 0)) {
		cout << "�����ϴ�." << endl;
	}
	else cout << "�ٽ� �Է��ϼ���" << endl;

	return 0;
}