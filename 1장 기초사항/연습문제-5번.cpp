//���� ǥ������ ü���� ���ϴ� ���α׷�
//���� �������� �Ǽ��� �Էµ�

#include <iostream>
#include <math.h>
#define PI 3.14
using namespace std;

int main(void) {
	double r, A, V; //������
	
	cout << "���� �������� �Է��ϼ���:";
	cin >> r;
	
	A = 4 * PI * pow(r, 2);
	V = (A * r) / 3;

	cout << "���� ǥ������ " << A << ", ���� ü���� " << V << "�Դϴ�." << endl;

	return 0;
}