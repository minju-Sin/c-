// �ڵ��� CellPhone class
// �𵨸�, ���� ȸ��, ����, ����, ī�޶� ���� ���� ��� ����
// ���� ���� �Ѵ� ��� �Լ�
#include <iostream>
#include <string>
using namespace std;
void p5();

void main() {
	p5();
}

class CellPhone {
private:
	string model;
	string company;
	string color;
	string offon;
	string camera;
public:
	string getModel();
	void setModel(string m);
	string getCompany();
	void setCompany(string c);
	string getColor();
	void setColor(string col);
	string getOffon();
	void setOffon(string o);
	string getCamera();
	void setCamera(string ca);
};

string CellPhone::getModel() {
	return model;
}
void CellPhone::setModel(string m) {
	model = m;
}
string CellPhone::getCompany() {
	return company;
}
void CellPhone::setCompany(string c) {
	company = c;
}
string CellPhone::getColor() {
	return color;
}
void CellPhone::setColor(string co) {
	color = co;
}
string CellPhone::getOffon() {
	return offon;
}
void CellPhone::setOffon(string o) {
	offon = o;
}

string CellPhone::getCamera() {
	return camera;
}
void CellPhone::setCamera(string ca) {
	camera = ca;
}

void p5() {
	CellPhone cell;

	cell.setModel("Iphone 14");
	cell.setCompany("Apple");
	cell.setColor("Red");
	cell.setOffon("ON");
	cell.setCamera("Yes");
	
	cout << "�𵨸�: " << cell.getModel() << endl;
	cout << "���� ȸ��: " << cell.getCompany() << endl;
	cout << "����: " << cell.getColor() << endl;
	cout << "����: " << cell.getOffon() << endl;
	cout << "ī�޶� ���� ����: " << cell.getCamera() << endl;
}
