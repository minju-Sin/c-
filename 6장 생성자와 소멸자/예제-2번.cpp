#include <iostream>
using namespace std;

class Time {
private:
	int hour;
	int minute;
	int second;
public:
	Time(); //생성자, 멤버변수에 0, 0, 0 저장, SetTime 이용
	Time(int h, int m, int s); //멤버변수에 인자값 저장
	void setTime(int h, int m, int s); //멤버변수에 인자값 저장
									  //인자 전달 값이 잘못된 시간이면 해당 항목 0으로 저장 
	void print();
};

// 첫번째 생성자
Time::Time() {
	setTime(0, 0, 0);
}
// 두번째 생성자
Time::Time(int h, int m, int s) {
	setTime(h, m, s);
}
// 시간 설정 함수
void Time::setTime(int h, int m, int s) {
	hour = ((0 <= h && h < 24) ? h : 0); // 시간 검증
	minute = ((0 <= m && m < 60) ? m : 0); // 분 검증
	second = ((0 <= s && s < 60) ? s : 0); // 초 검증
}
//"시:분:초"의 형식으로 출력
void Time::print() {
	cout << hour << ":" << minute << ":" << second << endl;
}

void main() {
	Time time1;
	Time time2(13, 27, 6);
	Time time3(99, 66, 77);

	time1.print();
	time2.print();
	time3.print();
}