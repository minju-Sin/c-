// ö�� ���� ���α׷� 
// ���ڿ� �ȿ� ��ħǥ�� ������ ���ڿ��� ù��° ���ڰ� �빮������ �˻�
// ���� �빮�ڰ� �ƴϸ� �빮�ڷ� ��ȯ
// ������ ���� ��ħǥ�� �����ϴ��� �˻� => ������ ��ħǥ �־���
// "point is easy ==> Point is easy. " �� ��ȯ 

#include <iostream>
#include <string>
using namespace std;

int main() {
	const int num = 100;
	char str[num];

	cout << "���ڿ��� �Է��ϼ���: ";
	cin.getline(str, num);

	if (*str >= 'a' && *str <= 'z') {
		*str -= 32; //�빮�� ��ȯ
	}
	int len = (int)strlen(str);
	if (str[len] != '.') {
		str[len] = '.';
		str[len + 1] = NULL;
	}
	cout << "���: " << str << endl;
	return 0;
}
