// ������ ��Ÿ���� Ŭ���� Nation
// ���� �̸�, �α�, ����, ���� �ҵ� data 
// ���� �α������� ����, ���� ���� �ҵ��� ���� ���� ����ϴ� ���α׷� 
#include <iostream>
#include <string>
using namespace std;

class Nation {
private:
	string name; // ���� �̸�
	int human; // �α�
	double area; // ����
	int money; //���� �ҵ� 
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
	cout << "���� �̸� : " << name << " �α� : " << getHuman() << " ���� : " << area << " ���� �ҵ� :" << money << endl;
}
int main() {
	Nation nat1("�߱�", 40000, 9856, 4560);
	Nation nat2("�̱�", 10000, 5654, 6540);
	Nation nat3("���ѹα�", 5000, 1004, 9870);
	
	cout << "======================================" << endl;
	cout << "���� 1 :"; nat1.Print();
	cout << "���� 2 :"; nat2.Print();
	cout << "���� 3 :"; nat3.Print();
	cout << "======================================" << endl;

	cout << "���α� ���� ���� ���� ���� ��¡�" << endl;
	int h1 = nat1.getHuman();
	int h2 = nat2.getHuman();
	int h3 = nat3.getHuman();

	if (h1 <= h2) {
		if (h2 <= h3) {
			cout << "���� 3�� �α� ���� ���� ����." << endl;
		}
		else cout << "���� 2�� �α� ���� ���� ����." << endl;
	}
	else {
		if (h1 <= h3) {
			cout << "���� 3�� �α� ���� ���� ����." << endl;
		}else cout << "���� 1�� �α� ���� ���� ����." << endl;
	}

	cout << "�ر��� �ҵ��� ���� ���� ���� ��¡�" << endl;
	int m1 = nat1.getMoney();
	int m2 = nat2.getMoney();
	int m3 = nat3.getMoney();

	if (m1 <= m2) {
		if (m2 <= m3) {
			cout << "���� 3�� �α� ���� ���� ����." << endl;
		}
		else cout << "���� 2�� �α� ���� ���� ����." << endl;
	}
	else {
		if (m1 <= m3) {
			cout << "���� 3�� �α� ���� ���� ����." << endl;
		}
		else cout << "���� 1�� �α� ���� ���� ����." << endl;
	}
	return 0;
}