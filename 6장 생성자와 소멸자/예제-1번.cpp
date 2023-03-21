//날짜 출력 
#include<iostream>
using namespace std;

class Date {
private:
	int year;
	int month;
	int day;
public:
	Date(int year = 2010, int month = 1, int day = 1);
	void print();
};

Date::Date(int y, int m, int d)
	: year(y), month(m), day(d){}

void Date::print() {
	cout << year << "년" << month << "월" << day << "일" << endl;
}
int main() {
	Date date1(2009, 3, 2); // 2009.3.2
	Date date2(2009); // 2009.1.1
	Date date3; // 2010.1.1
	date1.print();
	date2.print();
	date3.print();
	return 0;
}