// ���� Employee class
// �̸�, ��ȭ��ȣ, ���� ��� ����
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
	cout << "�̸��� �Է��Ͻÿ�: ";
	getline(cin, name);
	cout << "��ȭ��ȣ�� �Է��Ͻÿ�: ";
	getline(cin, phone);
	cout << "������ �Է��Ͻÿ�: ";
	cin >> money;
}

void Employee::setEmployee() {
	cout << "�̸�: " << name << " ��ȭ��ȣ: " << phone << " ����: " << money << endl;
}

void p4() {
	Employee employee;

	employee.getEmployee();
	employee.setEmployee();
}