#include <iostream>
#include <string>
using namespace std;
void p8();

int main() {
	p8();
	return 0;
}

void p8() {
	string str;
	int alpha = 0, num = 0, empty = 0; //���ĺ�, ����, ���� ���� ����  
	cout << "���ڸ� �Է��ϼ���: ";
	getline(cin, str);

	for (int i = 0; i < str.length(); i++) {
		//���ĺ� ã�� ��� 
		if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z') {
			alpha++;
		}
		//���� ã�� ���
		else if (str[i] >= '1' && str[i] <= '9') {
			num++;
		}
		//���� ã�� ���
		else if (str[i] == ' ') {
			empty++;
		}
	}
	cout << "���ĺ� ������ ����: " << alpha << endl;
	cout << "������ ����: " << num << endl;
	cout << "������ ����: " << empty << endl;
}
