// 철자 교정 프로그램 
// 문자열 안에 마침표가 있으면 문자열의 첫번째 문자가 대문자인지 검사
// 만약 대문자가 아니면 대문자로 변환
// 문장의 끝에 마침표가 존재하는지 검사 => 없으면 마침표 넣어줌
// "point is easy ==> Point is easy. " 로 변환 

#include <iostream>
#include <string>
using namespace std;

int main() {
	const int num = 100;
	char str[num];

	cout << "문자열을 입력하세요: ";
	cin.getline(str, num);

	if (*str >= 'a' && *str <= 'z') {
		*str -= 32; //대문자 변환
	}
	int len = (int)strlen(str);
	if (str[len] != '.') {
		str[len] = '.';
		str[len + 1] = NULL;
	}
	cout << "결과: " << str << endl;
	return 0;
}
