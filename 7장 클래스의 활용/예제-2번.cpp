// this 포인터 사용

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
		this->speed = speed; // this->speed 는 멤버 변수 , speed 는 매개변수 
	}
	else this->speed = 0; 
}
void Car::print() {
	cout << "속도 : " << speed << " 기어 : " << gear << " 색깔 : " << color;
}
void Car::isFaster(Car* p) {
	if (this->getSpeed() > p->getSpeed()) { // 현재 객체의 멤버 함수 
		this->print();
	}
	else p->print();
	cout << "의 자동차가 더 빠르다." << endl;
}
void main() {
	Car car1(0, 1, "red");
	Car car2(100, 3, "blue");
	car1.isFaster(&car2);
}