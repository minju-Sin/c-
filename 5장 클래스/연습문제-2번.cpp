// å Book class
// ���� title ���� author ��� ����
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
	cout << "������ �Է��Ͻÿ�: ";
	getline(cin, title);
	cout << "���ڸ� �Է��Ͻÿ�: ";
	getline(cin, author);
}

void Book::getBook() {
	cout << "������ " << title << ", ���ڴ� " << author << "�Դϴ�." << endl;
}

void p2() {
	Book book1, book2;
	book1.setBook();
	book2.setBook();
	book1.getBook();
	book2.getBook();
}