// ���� ������ �Է� -> ���� ���ϴ� ���α׷�
// "����Ͻðڽ��ϱ�?(Y/N)" ���� 
// Y(y) => �ݺ� 
// N(n) => ���� �ߴ� 
#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main() {
	const double PI = 3.14;
	double r = 0;
	string check;

	while (1) {
		cout << "���� ������: ";
		cin >> r;
		cout << "���� ����: ";
		cout << (pow(r, 2)) * PI << endl;
		cout << "����Ͻðڽ��ϱ�?(Y/N): ";
		cin >> check;
		if (check == "y" || check == "Y" || check == "n" || check == "N") {
			if (check == "n" || check == "N") {
				break;
			}
		}
		else break;
		
	}
	return 0;
}