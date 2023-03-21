#include<iostream>
using namespace std;
void p6();

void main() {
	p6();
}
class Complex {
private:
	double img_number1, img_number2, img_number;//허수부
	double real_number1, real_number2, real_number;//실수부
	bool check;//덧셈과뺄셈을구별하는변수
public:
	void setimg_number(double number1, double number2);//허수부에대한설정자
	void setreal_number(double number1, double number2);//실수부에대한설정자

	void Plus();//덧셈함수
	void Minus();//뺄셈함수

	void getimg_number();//허수부에대한접근자
	void getreal_number();//실수부에대한접근자

	void print();//계산값출력
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
	printf("허수부의값1 : %.2lfi\n", img_number1);
	printf("허수부의값2 : %.2lfi\n", img_number2);
}
void Complex::getreal_number() {
	printf("실수부의값1 : %.1lf\n", real_number1);
	printf("실수부의값2 : %.1lf\n", real_number2);
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