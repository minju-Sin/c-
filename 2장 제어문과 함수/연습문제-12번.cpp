//순환적인 프로그램

#include<iostream>
using namespace std;

int main() {
	int num;
	int value = 0;
	cout << "정수를 입력하세요: ";
	cin >> num;
	for (int x = 1; x <= num; x++) {
		value += (num*num*num);
	}
	cout << value << endl;
	return 0;
}