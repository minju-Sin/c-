// ��,��,�ʷ� ǥ���� �ð��� �� ������ �ð����� ��ȯ�ϴ� ���α׷�

#include <iostream>
using namespace std;

int main(void) {
	const int hour = 60; //1�ð��� 60��
	const int minute = 60; //1���� 60��

	int hr, min, sec, total;
	cout << "�ð��� �Է��ϼ���: ";
	cin >> hr >> min >> sec;

	total = (hr * hour * minute) + (min * minute) + sec;

	cout << total << "�� �Դϴ�." << endl;

	return 0;
}