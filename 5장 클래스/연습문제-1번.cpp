// �簢�� Rectangle class 
// ���� width ���� length ��� ����
// ���� calcArea() ��� �Լ�

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
	cout << "����: ";
	cin >> width;
	cout << "����: ";
	cin >> length;
}

int Rectangle::calcArea() {
	length *= width;
	return length;
}

void p1() {
	Rectangle rect;
	
	rect.getRect();
	cout << "�簢���� ����: " << rect.calcArea() << endl;
}