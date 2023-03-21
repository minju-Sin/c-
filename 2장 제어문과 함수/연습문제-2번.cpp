//계산기 프로그램
//각각의 연산을 함수로 작성하고 호출
#include <iostream>
#include <string.h>
using namespace std;
int Add(int num1, int num2);
int Sub(int num1, int num2);
int Mul(int num1, int num2);
double Div(double num1, double num2);

int main(void) {
	cout << "***********" << endl;
	cout << "+---Add" << endl;
	cout << "----Subtract" << endl;
	cout << "*---Multiply" << endl;
	cout << "/---Divide" << endl;
	cout << "Q---Quit" << endl;
	cout << "***********" << endl;

	char op;
	int num1, num2, value = 0;
	cout << "연산을 선택하시오: ";
	cin >> op;
	cout << "두 수를 공백으로 분리하여 입력하시오: ";
	cin >> num1 >> num2;
	
	switch (op) {
		case '+':
			value = Add(num1, num2);
			break;
		case '-':
			value = Sub(num1, num2);
			break;
		case 'x':
			value = Mul(num1, num2);
			break;
		case '/':
			if (num2 == 0) cout << "나눗셈을 할 수 없습니다." << endl;
			else value = Div(num1, num2);
			break;
		case 'Q':
			break;
	}
	cout << value;
	return 0;
}

//덧셈 함수
int Add(int num1, int num2) {
	return num1 + num2;
}

//뺄셈 함수
int Sub(int num1, int num2) {
	return num1 - num2;
}

//곱셈 함수
int Mul(int num1, int num2) {
	return num1 * num2;
}

//나눗셈 함수
double Div(double num1, double num2) {
	return num1 / num2;
}