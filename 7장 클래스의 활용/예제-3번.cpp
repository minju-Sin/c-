// const 사용
// 

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
	void setSpeed(int speed)  const; // 객체를 변경하지 않는 멤버 함수
	void print();
};
Car::Car(int speed, int gear, string color)
	: speed(speed), gear(gear), color(color) {};
int Car::getSpeed(){
	return speed;
}
void Car::setSpeed(int speed) const{
	cout << "속도 : " << speed << endl;
}
void Car::print() {
	cout << "속도 : " << speed << " 기어 : " << gear << " 색깔 : " << color;
}
void main() {
	const Car car1(0, 1, "red"); // 변경 불가능한 객체 
	Car car2(100, 3, "blue");
	
	car1.setSpeed(100);
	car2.setSpeed(200);
}