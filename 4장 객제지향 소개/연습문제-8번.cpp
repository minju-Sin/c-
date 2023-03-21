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
	int alpha = 0, num = 0, empty = 0; //알파벳, 숫자, 공백 세는 변수  
	cout << "문자를 입력하세요: ";
	getline(cin, str);

	for (int i = 0; i < str.length(); i++) {
		//알파벳 찾는 방법 
		if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z') {
			alpha++;
		}
		//숫자 찾는 방법
		else if (str[i] >= '1' && str[i] <= '9') {
			num++;
		}
		//공백 찾는 방법
		else if (str[i] == ' ') {
			empty++;
		}
	}
	cout << "알파벳 글자의 개수: " << alpha << endl;
	cout << "숫자의 개수: " << num << endl;
	cout << "공백의 개수: " << empty << endl;
}
