// 저금할 금액을 나타내는 하나의 인수 amount만을 받으며 save(100)와 같이 호출됨 -> save(int amount)함수
// save()는 현재까지 저축된 총액을 기억함, 한 번 호출될 때마다 총 저축액을 화면에 출력함 
// 정적 지역 변수 사용

#include <iostream>
using namespace std;
void save(int amount);

int main(void) {
	int amount;

	for (int i = 0; i < 5; i++) { //저축 5번 할 때
		cout << "저축할 금액: ";
		cin >> amount;
		save(amount);
	}
	return 0;
}

void save(int amount) {
	static int money = 0;

	money += amount;
	cout << "총 저축액: " << money << endl;
}