// �� ���� ���̰� 100���� ���� �ﰢ�� �߿��� ��Ÿ����� ������ �����ϴ� ���� �ﰢ���� ���� ���ϴ� ���α׷�
// ���� �ݺ��� �̿��Ͽ� ��Ÿ����� ������ �����ϴ� ������ ���� ã��

#include <iostream>
#include <math.h>
using namespace std;

int main(void) {
	for (int a = 1; a < 100; a++) {
		for (int b = 1; b < 100; b++) {
			for (int c = 1; pow(c,2) < 100; c++) {
				if (pow(a, 2) + pow(b, 2) == pow(c, 2)) { //��Ÿ��� ���� ����
					cout << "a�� ��: " << a << " b�� ��: " << b << " c�� �� : " << c << endl;
				}
			}
		}
	}


	return 0;
}