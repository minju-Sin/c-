// ������ ü���� ���ϴ� ���α׷�
// ������ ũ��� 200 x 200 x 200�� ���� �ʴ´�.
// ������ ũ�⸦ �ּҷ� ���� 

#include <iostream>
using namespace std;
#define SIZE 200 

int main(void) {
	unsigned short length, width, height, size = 0;

	bool sw = true;

	while (sw) {
		cout << "������ ����, �ʺ�, ���̸� �Է��ϼ���:" << endl;
		cin >> length >> width >> height;
		if (length > SIZE || width > SIZE || height > SIZE) {
			cout << "������ ũ�⸦ ������ϴ�." << endl;
		}
		else {
			sw = false;
		}
	}
	size = length * width * height;
	cout << "������ ü���� " << size << "�Դϴ�." << endl;

	return 0;
}
