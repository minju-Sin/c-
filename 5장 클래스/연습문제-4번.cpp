// 직원 Employee class
// 이름, 전화번호, 연봉 멤버 변수
#include <iostream>
#include <string>
using namespace std;
void p4();

void main() {
	p4();
}

class Employee {
private:
	string name;
	string phone;
	int money=0;
public:
	void getEmployee();
	void setEmployee();
};

void Employee::getEmployee() {
	cout << "이름을 입력하시오: ";
	getline(cin, name);
	cout << "전화번호를 입력하시오: ";
	getline(cin, phone);
	cout << "연봉을 입력하시오: ";
	cin >> money;
}

void Employee::setEmployee() {
	cout << "이름: " << name << " 전화번호: " << phone << " 연봉: " << money << endl;
}

void p4() {
	Employee employee;

	employee.getEmployee();
	employee.setEmployee();
}