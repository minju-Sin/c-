//switch문 사용하여 키보드로부터 하나의 문자를 읽고
//탭문자(\t), 줄문자(\n), 백스페이스(\) 문자인지 출력하는 프로그램
//탭 문자이면 "탭문자"를 출력

#include <iostream>
#include <string.h>
using namespace std;

int main(void) {
	char word;

	cout << "문자를 입력하시오: ";
	cin >> word;

	switch (word) {
		case '\\t':
			cout << "탭문자" << endl;
			break;
		case '\\n':
			cout << "줄문자" << endl;
			break;
		case '\\b':
			cout << "백스페이스 문자" << endl;
			break;
		default:
			break;
	}
	return 0;
}