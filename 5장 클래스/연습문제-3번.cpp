#include<iostream>
#include<ctime>
using namespace std;
void p3();

void main() {
	p3();
}
class Dice {
private:
	int face; //������ 1~6 ���� �ֻ��� ������ ����
public:
	//�ֻ��� ������ ����
	void roll();
	//���� �ֻ��� ���� ��� 
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
		cout << "�ֻ����� ���ڴ� " << dice.getFace() << "�Դϴ�." << endl;
	}
}
