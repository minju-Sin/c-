// 책 Book class
// 제목 title 저자 author 멤버 변수
#include <iostream>
#include <string>
using namespace std;
void p2();

void main() {
	p2();
}

class Book {
private:
	string title;
	string author;
public:
	void setBook();
	void getBook();
};

void Book::setBook() {
	cout << "제목을 입력하시오: ";
	getline(cin, title);
	cout << "저자를 입력하시오: ";
	getline(cin, author);
}

void Book::getBook() {
	cout << "제목은 " << title << ", 저자는 " << author << "입니다." << endl;
}

void p2() {
	Book book1, book2;
	book1.setBook();
	book2.setBook();
	book1.getBook();
	book2.getBook();
}