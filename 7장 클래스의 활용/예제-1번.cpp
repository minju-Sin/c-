// ��ü ������ ��� 

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
	cout << "�ӵ� : " << speed << " ��� : " << gear << " ���� : " << color << endl;
}
void main() {
	Car car1; // ���� �޸� �Ҵ� ��ü ���� 
	car1.print(); 

	Car* pCar = new Car(0, 1, "blue"); // ��ü ���� ���� , �ּҸ�����Ŵ 
	pCar->print();
}