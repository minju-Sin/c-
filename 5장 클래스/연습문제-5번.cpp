// 핸드폰 CellPhone class
// 모델명, 제조 회사, 색상, 전원, 카메라 장착 여부 멤버 변수
// 전원 끄고 켜는 멤버 함수
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
	
	cout << "모델명: " << cell.getModel() << endl;
	cout << "제조 회사: " << cell.getCompany() << endl;
	cout << "색상: " << cell.getColor() << endl;
	cout << "전원: " << cell.getOffon() << endl;
	cout << "카메라 장착 여부: " << cell.getCamera() << endl;
}
