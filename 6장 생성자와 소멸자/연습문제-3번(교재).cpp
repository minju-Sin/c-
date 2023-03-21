// ��ȭ�� ��Ÿ���� Movie Ŭ���� ����
// ���� title , ���� director, ���ۻ����� score  ��� ���� ����
#include<iostream>
#include<string>
using namespace std;

class Movie {
private:
	string title; // ����
	string director; // ����
	float score; // ���ۻ�����
public:
	Movie(string title , string director , float score);
	string getTitle(); //���� ��ȯ
	string getDirector(); // ���� ��ȯ
	float getScore(); // ���ۻ� ���� ��ȯ 
	void Print(); //��� ���� ��� 
};

Movie::Movie(string title, string director, float score)
	:title(title), director(director), score(score) {};

string Movie::getTitle() {
	return title;
}

string Movie::getDirector() {
	return director;
}

float Movie::getScore() {
	return score;
}

void Movie::Print() {
	cout << "���� : " << getTitle() << " ���� : " << getDirector() << " ���ۻ����� : " << getScore() << endl;
}

int main() {
	Movie mov1("���˵���" , "������", 4.5);
	Movie mov2("���ϵ�", "������", 4.7);
	Movie mov3("���׶�", "������", 3.7);

	cout << "===================================================" << endl;
	cout << "��ȭ 1"; mov1.Print();
	cout << "��ȭ 2"; mov2.Print();
	cout << "��ȭ 3"; mov3.Print();
	cout << "===================================================" << endl;

	float s1 = mov1.getScore();
	float s2 = mov2.getScore();
	float s3 = mov3.getScore();
	if (s1 <= s2) {
		if (s2 <= s3) {
			cout << "��ȭ 3�� ������ ���� �����ϴ�." << endl;
		}
		else cout << "��ȭ 2�� ������ ���� �����ϴ�." << endl;
	}
	else { 
		if (s1 <= s3) {
			cout << "��ȭ 3�� ������ ���� �����ϴ�." << endl;
		}
		else cout << "��ȭ 1�� ������ ���� �����ϴ�." << endl;
	}
	return 0;
}
