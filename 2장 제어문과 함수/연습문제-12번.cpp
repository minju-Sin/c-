//��ȯ���� ���α׷�

#include<iostream>
using namespace std;

int main() {
	int num;
	int value = 0;
	cout << "������ �Է��ϼ���: ";
	cin >> num;
	for (int x = 1; x <= num; x++) {
		value += (num*num*num);
	}
	cout << value << endl;
	return 0;
}