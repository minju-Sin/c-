// hello ==> olleh ����ϴ� ���α׷�

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	string str;
	cout << "���ڿ��� �Է��ϼ���: ";
	getline(cin, str);
	reverse(str.begin(), str.end()); //reverse �Լ� ���ڿ� ������ �� ���
	cout << str;
	return 0;
}