// ���޿� �ٴ� �ҵ漼 ��� ���α׷�
// ��ǥ ������ 1000���� ���� 8%
// 1000���� �ʰ� 4000���� ���� 17%
// 4000���� �ʰ� 8000���� ���� 26%
// 8000���� �ʰ� 35%
// ����ڷκ��� �ҵ��� �Է¹޾� �ҵ��� ������ ���� ������ ����ϴ� �Լ� get_tex() �ۼ��ϰ� �׽�Ʈ�ϴ� ���α׷� �ۼ�

#include <iostream>
using namespace std;
void get_tex(int money);

int main(void) {
	int money;
	cout << "�ҵ��� �Է��Ͻÿ�: ";
	cin >> money;

	get_tex(money);

	return 0;
}

void get_tex(int money) {
	if (money <= 1000) {
		money = money + ((money/100)*8);
	}
	else if (money > 1000 && money <= 4000) {
		money = money + ((money / 100) * 17);
	}
	else if (money > 4000 && money <= 8000) {
		money = money + ((money / 100) * 26);
	}
	else {
		money = money + ((money / 100) * 35);
	}
	cout << "����� �ҵ漼�� " << money << "�Դϴ�." << endl;
}