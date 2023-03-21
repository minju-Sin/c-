// const ���
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
	void setSpeed(int speed)  const; // ��ü�� �������� �ʴ� ��� �Լ�
	void print();
};
Car::Car(int speed, int gear, string color)
	: speed(speed), gear(gear), color(color) {};
int Car::getSpeed(){
	return speed;
}
void Car::setSpeed(int speed) const{
	cout << "�ӵ� : " << speed << endl;
}
void Car::print() {
	cout << "�ӵ� : " << speed << " ��� : " << gear << " ���� : " << color;
}
void main() {
	const Car car1(0, 1, "red"); // ���� �Ұ����� ��ü 
	Car car2(100, 3, "blue");
	
	car1.setSpeed(100);
	car2.setSpeed(200);
}