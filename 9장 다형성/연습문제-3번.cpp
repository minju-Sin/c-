#include <iostream>
using namespace std;
void p9_3();

class Point {
private:
	int x, y;
public:
	Point(int x, int y);
	int GetX() { return x; }
	int GetY() { return y; }
};
Point::Point(int x, int y)
	: x(x), y(y) {}

class Shape {
private:
	Point p1, p2;
public:
	Shape(int x1, int y1, int x2, int y2);
	virtual void Draw();
	virtual ~Shape() {};
};
Shape::Shape(int x1, int y1, int x2, int y2)
	:p1(x1, y1), p2(x2, y2) {}
void Shape::Draw() {
	cout << p1.GetX() << " " << p1.GetY() << " " << p2.GetX() << " " << p2.GetY() << endl;
}

class Circle : public Shape {
public:
	Circle(int x1, int y1, int x2, int y2);
	void Draw();
};
Circle::Circle(int x1, int y1, int x2, int y2)
	:Shape(x1, y1, x2, y2) {}
void Circle::Draw() {
	cout << "�� �׸���. ";
	Shape::Draw();

}
class Line : public Shape {
public:
	Line(int x1, int y1, int x2, int y2);
	void Draw();
};
Line::Line(int x1, int y1, int x2, int y2)
	:Shape(x1, y1, x2, y2) {}
void Line::Draw() {
	cout << "���� �׸���. ";
	Shape::Draw();
}

void main() {
	p9_3();
}

void p9_3() {
	Circle a(1, 1, 5, 5); // �»��/���ϴ��� ��ǥ
	Line b(5, 5, 9, 9); // �»��/���ϴ��� ��ǥ
	Shape* p;

	a.Draw(); // "�� �׸���" �»��/���ϴ��� ��ǥ ���
	b.Draw(); // "���� �׸���" �»��/���ϴ��� ��ǥ ���

	p = new Line(10, 10, 100, 100);
	p->Draw(); // "���� �׸���" ���, �»��/���ϴ��� ��ǥ ���

	p = new Circle(100, 100, 200, 200);
	p->Draw(); // "�� �׸���" ���, �»��/���ϴ��� ��ǥ ���
	delete p;
}