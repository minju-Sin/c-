// �Ｎ ���� ���α׷�
// ������ ��ȣ 1���� 100���� rand()�Լ� ȣ���Ͽ� ����
// ����ڷκ��� ��ȣ�� �޾� ��÷ ���θ� �Ǵ��ϴ� ���α׷� �ۼ�
// ��÷ ��ȣ�� �����ϴ� �Լ� get_number()
// ��÷ ���θ� �Ǻ��ϴ� �Լ� is_winning_ticket()

#include <iostream>
#include <random>
using namespace std;
void get_number(int num2);
void is_winning_ticket(int num1, int num2);

int main() {
	int num1, num2  = 0;
	cout << "������ ��ȣ�� �Է��ϼ���: ";
	cin >> num1;

	get_number(num2);
	is_winning_ticket(num1, num2);

	return 0;
}

void get_number(int num2) {
	for (int i = 1; i <= 100; i++) {
		num2 = rand() % 100 + 1;
	}
}

void is_winning_ticket(int num1, int num2) {
	if (num1 == num2) {
		cout << "��÷�Ǿ����ϴ�!" << endl;
	}
	else cout << "��÷���� �ʾҽ��ϴ�." << endl;
}