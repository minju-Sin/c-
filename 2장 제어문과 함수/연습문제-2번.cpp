//���� ���α׷�
//������ ������ �Լ��� �ۼ��ϰ� ȣ��
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
	cout << "������ �����Ͻÿ�: ";
	cin >> op;
	cout << "�� ���� �������� �и��Ͽ� �Է��Ͻÿ�: ";
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
			if (num2 == 0) cout << "�������� �� �� �����ϴ�." << endl;
			else value = Div(num1, num2);
			break;
		case 'Q':
			break;
	}
	cout << value;
	return 0;
}

//���� �Լ�
int Add(int num1, int num2) {
	return num1 + num2;
}

//���� �Լ�
int Sub(int num1, int num2) {
	return num1 - num2;
}

//���� �Լ�
int Mul(int num1, int num2) {
	return num1 * num2;
}

//������ �Լ�
double Div(double num1, double num2) {
	return num1 / num2;
}