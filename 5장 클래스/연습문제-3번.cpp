#include<iostream>
#include<ctime>
using namespace std;
void p3();

void main() {
	p3();
}
class Dice {
private:
	int face; //임의의 1~6 값이 주사위 값으로 저장
public:
	//주사위 던지는 행위
	void roll();
	//현재 주사위 값을 출력 
	int getFace();
};
void Dice::roll() {
	face = (int)(rand() % 6 + 1);
}
int Dice:: getFace() {
	return face;
}

void p3() {
	Dice dice;
	srand(time(NULL));
	for (int i = 0; i < 10; i++) {
		dice.roll();
		cout << "주사위의 숫자는 " << dice.getFace() << "입니다." << endl;
	}
}
