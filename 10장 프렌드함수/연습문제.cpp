#include <iostream>
using namespace std;
class Vector {
private:
	double x, y;
public:
	Vector(double x, double y);
	void display();
	Vector operator+(Vector& a) {
		Vector v(0, 0);
		v.x = this->x + a.x;
		v.y = this->y + a.y;
		return v;
	}
};

Vector::Vector(double x, double y)
{
	cout << "»ý¼ºÀÚ";
	this->x = x;
	this->y = y;
}

void Vector::display() {
	cout << x << y << endl;
}


int main() {
	Vector v1(1, 1),v2(2, 2);
	Vector v3 = v1 + v2;
	v3.display();
	return 0;
}