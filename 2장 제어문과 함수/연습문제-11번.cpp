// ������ �ݾ��� ��Ÿ���� �ϳ��� �μ� amount���� ������ save(100)�� ���� ȣ��� -> save(int amount)�Լ�
// save()�� ������� ����� �Ѿ��� �����, �� �� ȣ��� ������ �� ������� ȭ�鿡 ����� 
// ���� ���� ���� ���

#include <iostream>
using namespace std;
void save(int amount);

int main(void) {
	int amount;

	for (int i = 0; i < 5; i++) { //���� 5�� �� ��
		cout << "������ �ݾ�: ";
		cin >> amount;
		save(amount);
	}
	return 0;
}

void save(int amount) {
	static int money = 0;

	money += amount;
	cout << "�� �����: " << money << endl;
}