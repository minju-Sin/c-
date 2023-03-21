// this ������ ���

#include<iostream>
#include<string>
using namespace std;

class Car {
private:
	int speed;
	int gear;
	string color;
public:
	Car(int speed = 0, int gear = 1, string color = "white");
	int getSpeed();
	void setSpeed(int speed);
	void print();
	void isFaster(Car* p);
};
Car::Car(int speed, int gear, string color)
	: speed(speed), gear(gear), color(color) {};
int Car::getSpeed() {
	return speed;
}
void Car::setSpeed(int speed) {
	if (speed > 0) {
		this->speed = speed; // this->speed �� ��� ���� , speed �� �Ű����� 
	}
	else this->speed = 0; 
}
void Car::print() {
	cout << "�ӵ� : " << speed << " ��� : " << gear << " ���� : " << color;
}
void Car::isFaster(Car* p) {
	if (this->getSpeed() > p->getSpeed()) { // ���� ��ü�� ��� �Լ� 
		this->print();
	}
	else p->print();
	cout << "�� �ڵ����� �� ������." << endl;
}
void main() {
	Car car1(0, 1, "red");
	Car car2(100, 3, "blue");
	car1.isFaster(&car2);
}