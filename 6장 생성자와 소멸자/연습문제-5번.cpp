// �ڵ����� ���� �޼��� Ŭ���� SMS
// �۽��� ����, ������ ����, �޽��� �ؽ�Ʈ, �۽� �ð� data
// setText() ���� �޽����� �ؽ�Ʈ ����
// print() �޽����� ����� �ٿ� �ֿܼ� ��� 
// �� ���� ���ڸ޽��� ���� test 
#include<iostream>
#include<string>
using namespace std;

class SMS {
private:
	string phone1; // �۽��� ����
	string phone2; // ������ ���� 
	string text; // �޽��� 
	string time; // �۽� �ð� 
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
	cout << "�۽��� ��ȭ��ȣ : " << phone1 << endl;
	cout << "�޽��� ���� : " << setText() << endl;
	cout << "�ð� :" << time << endl;
	cout << "������ ��ȭ��ȣ :" << phone2 << endl;
}

void main() {
	SMS sms1("010-1234-5678", "010-9876-5432", "�ȳ�?", "11:25");
	SMS sms2("010-5648-4545", "010-9536-5232", "��������", "19:26");
	SMS sms3("010-2470-8336", "010-1246-5552", "�޽��� ����", "13:27");

	sms1.print();
	sms2.print();
	sms3.print();
}

