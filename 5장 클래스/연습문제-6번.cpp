#include<iostream>
using namespace std;
void p6();

void main() {
	p6();
}
class Complex {
private:
	double img_number1, img_number2, img_number;//�����
	double real_number1, real_number2, real_number;//�Ǽ���
	bool check;//�����������������ϴº���
public:
	void setimg_number(double number1, double number2);//����ο����Ѽ�����
	void setreal_number(double number1, double number2);//�Ǽ��ο����Ѽ�����

	void Plus();//�����Լ�
	void Minus();//�����Լ�

	void getimg_number();//����ο�����������
	void getreal_number();//�Ǽ��ο�����������

	void print();//��갪���
};

void Complex::setimg_number(double number1, double number2) {
	img_number = 0;
	img_number1 = number1;
	img_number2 = number2;
}
void Complex::setreal_number(double number1, double number2) {
	real_number = 0;
	real_number1 = number1;
	real_number2 = number2;
}

void Complex::getimg_number() {
	printf("������ǰ�1 : %.2lfi\n", img_number1);
	printf("������ǰ�2 : %.2lfi\n", img_number2);
}
void Complex::getreal_number() {
	printf("�Ǽ����ǰ�1 : %.1lf\n", real_number1);
	printf("�Ǽ����ǰ�2 : %.1lf\n", real_number2);
}

void Complex::Plus() {
	real_number = real_number1 + real_number2;
	img_number = img_number1 + img_number2;
	check = 1;
}
void Complex::Minus() {
	real_number = real_number1 - real_number2;
	img_number = img_number1 - img_number2;
	check = 0;
}

void Complex::print() {
	if (check == 1) {
		printf("(%.1lf + %.2lfi) + (%.1lf + %.2lfi) = %.1lf + %.1lfi \n", real_number1, img_number1, real_number2, img_number2, real_number, img_number);
	}
	else if (check == 0) {
		printf("(%.1lf + %.2lfi) - (%.1lf + %.2lfi) = %.1lf + %.1lfi \n", real_number1, img_number1, real_number2, img_number2, real_number, img_number);
	}
}

void p6() {
	Complex C;

	C.setreal_number(5.0, 7.0);
	C.setimg_number(8.0, 9.9);

	C.getreal_number();
	C.getimg_number();

	C.Plus();
	C.print();

	C.Minus();
	C.print();
}