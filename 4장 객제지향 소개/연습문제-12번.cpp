// 아이디 패스워드 입력
// 일치하는지 검사하는 프로그램

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
			cout << "로그인 성공!" << endl;
		}
	}
	else {
		cout << "로그인 실패!" << endl;
	}
	

	return 0;
}