// ���� �����ͷ� ȯ���ϴ� ���α׷�
// ��ȣ��� �̿� const 

#include <iostream>
using namespace std;

int main(void) {
	const double meter = 3.3058; //1��
	int num;

	cout << "�� ���� �Է��ϼ���: ";
	cin >> num;

	cout << num << "���� �����ͷ� ȯ���ϸ� " << num * meter << "�Դϴ�." << endl;

	return 0;
}