// 국가를 나타내는 클래스 Nation
// 국가 이름, 인구, 넓이, 국민 소득 data 
// 가장 인구가많은 국가, 가장 국민 소득이 높은 국가 출력하는 프로그램 
#include <iostream>
#include <string>
using namespace std;

class Nation {
private:
	string name; // 국가 이름
	int human; // 인구
	double area; // 넓이
	int money; //국민 소득 
public:
	Nation(string name, int human, double area, int money);
	int getHuman();
	int getMoney();
	void Print();
};
Nation::Nation(string name, int human, double area, int money)
	: name(name), human(human), area(area), money(money) {};
int Nation::getHuman() {
	return human;
}
int Nation::getMoney() {
	return money;
}
void Nation::Print() {
	cout << "국가 이름 : " << name << " 인구 : " << getHuman() << " 넓이 : " << area << " 국만 소득 :" << money << endl;
}
int main() {
	Nation nat1("중국", 40000, 9856, 4560);
	Nation nat2("미국", 10000, 5654, 6540);
	Nation nat3("대한민국", 5000, 1004, 9870);
	
	cout << "======================================" << endl;
	cout << "국가 1 :"; nat1.Print();
	cout << "국가 2 :"; nat2.Print();
	cout << "국가 3 :"; nat3.Print();
	cout << "======================================" << endl;

	cout << "※인구 수가 가장 많은 국가 출력※" << endl;
	int h1 = nat1.getHuman();
	int h2 = nat2.getHuman();
	int h3 = nat3.getHuman();

	if (h1 <= h2) {
		if (h2 <= h3) {
			cout << "국가 3의 인구 수가 가장 많다." << endl;
		}
		else cout << "국가 2의 인구 수가 가장 많다." << endl;
	}
	else {
		if (h1 <= h3) {
			cout << "국가 3의 인구 수가 가장 많다." << endl;
		}else cout << "국가 1의 인구 수가 가장 많다." << endl;
	}

	cout << "※국민 소득이 가장 높은 국가 출력※" << endl;
	int m1 = nat1.getMoney();
	int m2 = nat2.getMoney();
	int m3 = nat3.getMoney();

	if (m1 <= m2) {
		if (m2 <= m3) {
			cout << "국가 3의 인구 수가 가장 많다." << endl;
		}
		else cout << "국가 2의 인구 수가 가장 많다." << endl;
	}
	else {
		if (m1 <= m3) {
			cout << "국가 3의 인구 수가 가장 많다." << endl;
		}
		else cout << "국가 1의 인구 수가 가장 많다." << endl;
	}
	return 0;
}