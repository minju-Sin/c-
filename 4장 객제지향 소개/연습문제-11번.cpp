// 단어의 자음과 모음 개수 출력하는 프로그램

#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	cout << "문자열을 입력하세요: ";
	getline(cin, str); //문자열 입력
	int consonant = 0,vowel = 0; //자음 개수, 모음 개수

	for (int i = 0; i < str.length(); i++) {
		//모음
		if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
			vowel++;
		}
		else consonant++;
	}
	cout << "자음의 개수: " << consonant << ", 모음의 개수: " << vowel << endl;
	return 0;
}