// �迭 days[] �ʱ�ȭ�ϰ� �迭 ������ ���� ����ϴ� ���α׷�
#include <iostream>
using namespace std;

int main(void) {
	const int day = 12;
	int days[day] = { 31,29,31,30,31,30,31,31,30,31,30,31 };

	for (int i = 0; i < day; i++) {
		cout << i + 1 << "���� " << days[i] << "�ϱ��� �ֽ��ϴ�." << endl;
	}
	return 0;
}