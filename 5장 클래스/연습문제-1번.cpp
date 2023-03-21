// 사각형 Rectangle class 
// 가로 width 세로 length 멤버 변수
// 넓이 calcArea() 멤버 함수

#include <iostream>
using namespace std;
void p1();

void main() {
	p1();
}
class Rectangle {
private:
	int width;
	int length;
public:
	void getRect();
	int calcArea();
};

void Rectangle::getRect() {
	cout << "가로: ";
	cin >> width;
	cout << "세로: ";
	cin >> length;
}

int Rectangle::calcArea() {
	length *= width;
	return length;
}

void p1() {
	Rectangle rect;
	
	rect.getRect();
	cout << "사각형의 넓이: " << rect.calcArea() << endl;
}