// 객체 포인터 사용 

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
	void print();
};
Car::Car(int speed, int gear, string color)
	: speed(speed), gear(gear), color(color) {}
void Car::print() {
	cout << "속도 : " << speed << " 기어 : " << gear << " 색깔 : " << color << endl;
}
void main() {
	Car car1; // 정적 메모리 할당 객체 생성 
	car1.print(); 

	Car* pCar = new Car(0, 1, "blue"); // 객체 동적 생성 , 주소를가리킴 
	pCar->print();
}