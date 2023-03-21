// 핸드폰의 문자 메세지 클래스 SMS
// 송신자 전번, 수신자 전번, 메시지 텍스트, 송신 시각 data
// setText() 문자 메시지의 텍스트 설정
// print() 메시지에 헤더를 붙여 콘솔에 출력 
// 몇 개의 문자메시지 생성 test 
#include<iostream>
#include<string>
using namespace std;

class SMS {
private:
	string phone1; // 송신자 전번
	string phone2; // 수신자 전번 
	string text; // 메시지 
	string time; // 송신 시간 
public:
	SMS(string phone1, string phone2, string text, string time);
	string setText();
	void print();
};

SMS::SMS(string phone1, string phone2, string text, string time)
	:phone1(phone1), phone2(phone2), text(text), time(time) {};

string SMS::setText() {
	return text;
}
void SMS::print() {
	cout << "========================" << endl;
	cout << "송신자 전화번호 : " << phone1 << endl;
	cout << "메시지 내용 : " << setText() << endl;
	cout << "시간 :" << time << endl;
	cout << "수신자 전화번호 :" << phone2 << endl;
}

void main() {
	SMS sms1("010-1234-5678", "010-9876-5432", "안녕?", "11:25");
	SMS sms2("010-5648-4545", "010-9536-5232", "ㅋㅋㅋㅋ", "19:26");
	SMS sms3("010-2470-8336", "010-1246-5552", "메시지 보냄", "13:27");

	sms1.print();
	sms2.print();
	sms3.print();
}

