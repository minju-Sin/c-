// 찾아 바꾸기 기능 구현
// 사용자에게 80문자의 문자열 입력
// 찾을 문자열 입력
// 바꿀 문자열 입력
// 문자열을 찾아 바꾼 후 문자열 출력

#include <iostream>
#include <cstring>
using namespace std;

int main() {
	const int num = 80;
	char str[num];
	char find[num];
	char change[num];

	char* pstr;
	char* tmp = new char[num];

	cout << "문자열을 입력하시오: ";
	cin.getline(str, num);
	cout << "찾을 문자열";
	cin.getline(find, num);
	cout << "바꿀 문자열";
	cin.getline(change, num);

	pstr = strstr(str, find); //사용자가 입력한 문자열에서 찾을 문자열을 찾는다 
	if (find == NULL) {
		cout << "입력하신 문자열을 찾을 수 없습니다." << endl;
	}
	strncpy(tmp, str, pstr - str);
	tmp[pstr - str] = NULL;
	strcat(tmp, change);
	strcat(tmp, pstr + strlen(find));
	strcpy(str, tmp);
	delete[] tmp;

	cout << "결과: " << str << endl;
	return 0;
}