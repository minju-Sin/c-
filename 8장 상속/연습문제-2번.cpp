#include <iostream>
using namespace std;
void p8_2();

class Point {
private:
	int x,y;
public:
	Point(int x ,int y);
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
	void Draw();
};
Shape::Shape(int x1, int y1, int x2, int y2)
	:p1(x1,y1),p2(x2,y2) {}
void Shape::Draw() {
	cout << p1.GetX() << " " << p1.GetY() << " " << p2.GetX() << " " << p2.GetY() << endl;
}

class Circle : public Shape {
public:
	Circle(int x1, int y1, int x2, int y2);
	void Draw();
};
Circle::Circle(int x1, int y1, int x2, int y2)
	:Shape(x1,y1,x2,y2) {}
void Circle::Draw() {
	cout << "원 그린다. ";
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
	cout << "직선 그린다. ";
	Shape::Draw();
}

void main() {
	p8_2();
}

void p8_2() {
	Circle a(1, 1, 5, 5); // 좌상단/우하단점 좌표
	Line b(5, 5, 9, 9); // 좌상단/우하단점 좌표

	a.Draw(); // "원 그린다" 좌상단/우하단점 좌표 출력
	b.Draw(); // "직선 그린다" 좌상단/우하단점 좌표 출력
}