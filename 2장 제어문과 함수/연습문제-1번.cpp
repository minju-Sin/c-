//����ڷκ��� �� ���� ������ �а� if-else���� ����Ͽ� ���� ���� ���� �����ϴ� ���α׷�
//�Լ� get_minimum(x1, x2, x3)�̿� 

#include <iostream>
using namespace std;
void get_minimum(int x1, int x2, int x3);
int main(void) {
	int x1, x2, x3;
	cout << "�� ���� ������ �Է��Ͻÿ�: ";
	cin >> x1 >> x2 >> x3;

	get_minimum(x1, x2, x3);

	return 0;
}

void get_minimum(int x1, int x2, int x3) {
	if (x1 < x2) {
		if (x1 < x3) {
			cout << x1 << "�� ���� �۴�" << endl;
		}
		else cout << x3 << "�� ���� �۴�" << endl;
	}
	else {
		if (x2 < x3) {
			cout << x2 << "�� ���� �۴�" << endl;
		}
		else cout << x3 << "�� ���� �۴�" << endl;
	}
}