#include <iostream>
using namespace std;
void p3();
// ������ Ŭ���� 
class FruitSeller {
private:
	int Sprice; //��� ����
	int Sapple; //��� ����
	int Smoney; //���� �ݾ�
public:
	FruitSeller(int Sprice, int Sapple, int Smoney);
	int saleapples(int money);
	void ShowSalesResult();
};
//������ 
FruitSeller::FruitSeller(int Sprice, int Sapple, int Smoney)
	: Sprice(Sprice), Sapple(Sapple), Smoney(Smoney) {};

int FruitSeller:: saleapples(int money) {
	int num = money / Sprice; 
	Sapple -= num; // ��� ���� = ���� ��� ���� - �Ǹ��� ��� ���� 
 	Smoney += money; // ���� �ݾ� = �����ݾ� + �մ��� �� �ݾ� 
	return num; // �Ǹ��� ���� ���� 
}
//��� 
void FruitSeller::ShowSalesResult(){
	cout << "���� �Ǹ����� ��Ȳ" << endl;
	cout << "���� ���: " << Sapple << endl;
	cout << "�Ǹ� ����: " << Smoney << endl;
}

// �մ� Ŭ����
class FruitBuyer {
private:
	int Bmoney; 
	int Bapple;
public:
	FruitBuyer(int Bmoney, int Bapple);
	void BuyApples(FruitSeller& seller, int Bmoney);
	void ShowBuyResult();
};
//������
FruitBuyer::FruitBuyer(int Bmoney, int Bapple)
	: Bmoney(Bmoney), Bapple(Bapple) {};

void FruitBuyer::BuyApples(FruitSeller& seller, int money) {
	Bapple += seller.saleapples(money); // ���� ���� = �����ڸ� �̿��Ͽ� ã�Ƴ� 
	Bmoney -= money; // ���� �ܾ� = �մ��� ����ִ� �� - ����� �� �� ������ �� 
}
//��� 
void FruitBuyer::ShowBuyResult() {
	cout << "���� �������� ��Ȳ" << endl;
	cout << "���� �ܾ�: " << Bmoney << endl;
	cout << "��� ����: " << Bapple << endl;
}

void p3() {
	FruitSeller seller(1000, 20, 0);
	FruitBuyer buyer(5000, 0);
	buyer.BuyApples(seller, 2000);

	seller.ShowSalesResult();
	buyer.ShowBuyResult();
}

void main() {
	p3();
}