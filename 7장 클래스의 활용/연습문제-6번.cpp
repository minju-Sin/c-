// ��¥�� ��Ÿ���� Date Ŭ����
// Date class ��� ���� year, month, day , ������, �Ҹ��� ���� 
// ������ ��Ÿ���� Employee Ŭ����
// Employee clss ������ �̸�, ����, �Ի����� ����  (��, ���԰���)
// ���ϰ� �Ի����� Date ��ü�� ǥ�� 
// Emplyee Ŭ������ �����ڴ� �̸�, ����, �Ի����� �Ű������� ���� 
#include<iostream>
#include<string>
using namespace std;

class Date {
private:
	int year; //��
	int month; //��
	int day; //��
public:
	Date(int year, int month, int day);
	void print();
};

Date::Date(int year, int month, int day)
	: year(year), month(month), day(day) {}

void Date::print() {
	cout << year << "��" << month << "��" << day << "��" << endl;
}


class Employee {
private:
	string name; //���� �̸�
	Date bir; //���� ����
	Date hir; //���� �Ի��� 
public:
	Employee(string name, Date bir, Date hir);
	void print();
};

Employee::Employee(string name, Date bir, Date hir)
	: name(name), bir(bir), hir(hir) {};

void Employee::print() {
	cout << "������ �̸� : " << name << endl;
	cout << "������ ���� : "; 
	bir.print();
	cout << "������ �Ի��� : ";
	hir.print();
}
int main() {
	Date bir(1987, 4, 27);
	Date hir(2011, 2, 05);
	Employee emp("ȫ�浿", bir, hir);
	emp.print();
	return 0;
}