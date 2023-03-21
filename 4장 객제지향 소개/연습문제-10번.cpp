// hello ==> olleh 출력하는 프로그램

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	string str;
	cout << "문자열을 입력하세요: ";
	getline(cin, str);
	reverse(str.begin(), str.end()); //reverse 함수 문자열 뒤집을 때 사용
	cout << str;
	return 0;
}