// cm�� ǥ���� Ű�� �Է��Ͽ� ��Ʈ�� ��ġ�� ��ȯ�ϴ� ���α׷�
#include <iostream>
using namespace std;

int main(void) {
	const double feet = 12;
	const double inch = 2.54;

	double height, ft, ih;

	cout << "Ű�� �Է��ϼ���: ";
	cin >> height;

	ft = (int)(height / inch / feet);
	ih = (height - ft * inch * feet) / inch;

	

	cout << height << "cm�� " << ft << "��Ʈ " << ih << "��ġ�Դϴ�." << endl;

	return 0;
}
