//ȭ�� �µ��� ���� �µ��� �ٲٴ� ���α׷�

#include <iostream>
using namespace std;

int main(void) {
	const int temp = 32;
	int f_temp , c_temp;
	cout << "ȭ�� �µ��� �Է��Ͻÿ�: ";
	cin >> f_temp;

	c_temp = (5 * (f_temp - temp)) / 9;
	cout << "���� �µ��� " << c_temp << "�� �Դϴ�." << endl;

	return 0;
}