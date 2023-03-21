// string 클래스
// 사용자로 받은 문자열이 바른 물품 번호인지 검사하는 프로그램 
// 물품번호 => 크기:6 + 앞 2개 영문자 : 물건 종류 + 뒤 4개 숫자 : 모델 번호
// 예시) TV1523 TV -> 물건 종류 , 1523 -> 모델 번호
// 문자열 길이, 앞의 두 문자 알파벳인지 나머지 문자 숫자인지 확인
#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	cout << "문자열을 입력하시오: ";
	getline(cin, str);

	if (str.length() != 6) {
		cout << "문자열 길이가 올바르지 않습니다." << endl;
		getline(cin, str);
	}
	for (int i = 0; i < 2; i++) {
		if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z') {
			cout << "알파벳이 맞습니다." << endl;
			break;
		}
		else cout << "알파벳이 올바르지 않습니다." << endl;
		break;
	}
	for (int i = 2; i < 6; i++) {
		if (str[i] >= '0' && str[i] <= '9') {
			cout << "숫자가 맞습니다." << endl;
			break;
		}
		else cout << "숫자가 올바르지 않습니다." << endl;
		break;
	}
	return 0;
}