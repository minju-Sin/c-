// 날짜를 나타내는 Date 클래스
// Date class 멤버 변수 year, month, day , 생성자, 소멸자 가짐 
// 직원을 나타내는 Employee 클래스
// Employee clss 직원의 이름, 생일, 입사일을 가짐  (즉, 포함관계)
// 생일과 입사일은 Date 객체로 표현 
// Emplyee 클래스의 생성자는 이름, 생일, 입사일을 매개변수로 받음 
#include<iostream>
#include<string>
using namespace std;

class Date {
private:
	int year; //년
	int month; //월
	int day; //일
public:
	Date(int year, int month, int day);
	void print();
};

Date::Date(int year, int month, int day)
	: year(year), month(month), day(day) {}

void Date::print() {
	cout << year << "년" << month << "월" << day << "일" << endl;
}


class Employee {
private:
	string name; //직원 이름
	Date bir; //직원 생일
	Date hir; //직원 입사일 
public:
	Employee(string name, Date bir, Date hir);
	void print();
};

Employee::Employee(string name, Date bir, Date hir)
	: name(name), bir(bir), hir(hir) {};

void Employee::print() {
	cout << "직원의 이름 : " << name << endl;
	cout << "직원의 생일 : "; 
	bir.print();
	cout << "직원의 입사일 : ";
	hir.print();
}
int main() {
	Date bir(1987, 4, 27);
	Date hir(2011, 2, 05);
	Employee emp("홍길동", bir, hir);
	emp.print();
	return 0;
}