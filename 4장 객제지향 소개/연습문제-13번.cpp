//워드의 찾아바꾸기 기능 만드는 프로그램
#include <iostream>
#include <string>
using namespace std;
void p13();

int main() {
	p13();
	return 0;
}

void p13() {
	string str; //사용자로부터 입력받는 문자
	string Fstr; //찾는 문자
	string Cstr; //바꾸는 문자

	cout << "문자를 입력하세요: ";
	if (str.length() <= 100) {
		getline(cin, str);
	}
	else cout << "100글자 내로 입력하세요";
	
	cout << "찾을 문자를 입력하세요: ";
	if (Fstr.length() <= 10) {
		getline(cin, Fstr);
	}
	else cout << "10글자 내로 입력하세요";

	cout << "바꿀 문자를 입력하세요: ";
	if (Cstr.length() <= 10) {
		getline(cin, Cstr);
	}
	else cout << "10글자 내로 입력하세요";

	str.replace(str.find(Fstr), Cstr.length(), Cstr);
	cout << "결과: " << str << endl;
}