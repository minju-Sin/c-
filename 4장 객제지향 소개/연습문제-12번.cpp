// ���̵� �н����� �Է�
// ��ġ�ϴ��� �˻��ϴ� ���α׷�

#include <iostream>
#include <string>
using namespace std;

int main() {
	const string ID = "ab9322";
	const string Password = "123456";
	string id;
	string pass;

	cout << "ID: ";
	getline(cin, id);
	cout << "Password: ";
	getline(cin, pass);

	if (id == ID) {
		if (pass == Password) {
			cout << "�α��� ����!" << endl;
		}
	}
	else {
		cout << "�α��� ����!" << endl;
	}
	

	return 0;
}