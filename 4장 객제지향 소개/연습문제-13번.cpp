//������ ã�ƹٲٱ� ��� ����� ���α׷�
#include <iostream>
#include <string>
using namespace std;
void p13();

int main() {
	p13();
	return 0;
}

void p13() {
	string str; //����ڷκ��� �Է¹޴� ����
	string Fstr; //ã�� ����
	string Cstr; //�ٲٴ� ����

	cout << "���ڸ� �Է��ϼ���: ";
	if (str.length() <= 100) {
		getline(cin, str);
	}
	else cout << "100���� ���� �Է��ϼ���";
	
	cout << "ã�� ���ڸ� �Է��ϼ���: ";
	if (Fstr.length() <= 10) {
		getline(cin, Fstr);
	}
	else cout << "10���� ���� �Է��ϼ���";

	cout << "�ٲ� ���ڸ� �Է��ϼ���: ";
	if (Cstr.length() <= 10) {
		getline(cin, Cstr);
	}
	else cout << "10���� ���� �Է��ϼ���";

	str.replace(str.find(Fstr), Cstr.length(), Cstr);
	cout << "���: " << str << endl;
}