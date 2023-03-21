#include <iostream>
using namespace std;
void p3();
// 사과장수 클래스 
class FruitSeller {
private:
	int Sprice; //사과 가격
	int Sapple; //사과 개수
	int Smoney; //소유 금액
public:
	FruitSeller(int Sprice, int Sapple, int Smoney);
	int saleapples(int money);
	void ShowSalesResult();
};
//생성자 
FruitSeller::FruitSeller(int Sprice, int Sapple, int Smoney)
	: Sprice(Sprice), Sapple(Sapple), Smoney(Smoney) {};

int FruitSeller:: saleapples(int money) {
	int num = money / Sprice; 
	Sapple -= num; // 사과 개수 = 원래 사과 개수 - 판매한 사과 개수 
 	Smoney += money; // 소유 금액 = 소유금액 + 손님이 준 금액 
	return num; // 판매한 과일 개수 
}
//출력 
void FruitSeller::ShowSalesResult(){
	cout << "과일 판매자의 현황" << endl;
	cout << "남은 사과: " << Sapple << endl;
	cout << "판매 수익: " << Smoney << endl;
}

// 손님 클래스
class FruitBuyer {
private:
	int Bmoney; 
	int Bapple;
public:
	FruitBuyer(int Bmoney, int Bapple);
	void BuyApples(FruitSeller& seller, int Bmoney);
	void ShowBuyResult();
};
//생성자
FruitBuyer::FruitBuyer(int Bmoney, int Bapple)
	: Bmoney(Bmoney), Bapple(Bapple) {};

void FruitBuyer::BuyApples(FruitSeller& seller, int money) {
	Bapple += seller.saleapples(money); // 과일 개수 = 참조자를 이용하여 찾아냄 
	Bmoney -= money; // 현재 잔액 = 손님이 들고있던 돈 - 사과를 살 때 지출한 돈 
}
//출력 
void FruitBuyer::ShowBuyResult() {
	cout << "과일 구매자의 현황" << endl;
	cout << "현재 잔액: " << Bmoney << endl;
	cout << "사과 개수: " << Bapple << endl;
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