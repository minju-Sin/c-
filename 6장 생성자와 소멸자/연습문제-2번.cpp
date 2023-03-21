// 상자를 나타내는 BOX 클래스 설계 
// 박스가 비어 있는지 확인 하는 empty 멤버 함수
// 부피를 계산하는 getVolume() 멤버 함수 
// main에서 가장 부피가 큰 박스 출력 
#include <iostream>
using namespace std;
void p2();

class Box {
private:
	int w; //밑면 폭
	int h; //밑면 높이
	int v_h; //상자 높이 
public:
	Box(int w = 1, int h = 1, int v_h = 1);
	int getVolume(); //상자의 부피를 계산하여 반환
	void print(); // 상자 밑면적, 상자 높이, 면적을 출력 
};

Box::Box(int w, int h, int v_h)
	:w(w), h(h), v_h(v_h) {};

int Box::getVolume() {
	return w * h * v_h; //상자의 부피
}

void Box::print() {
	cout << "밑면적 : " << w * h << " 상자 높이 : " << v_h << " 부피 : " << getVolume() << endl;
}

void p2() {
	Box box1(2, 3, 4);
	Box box2(4, 5, 6);
	Box box3;
	cout << "=================================" << endl;
	cout << "박스 1"; box1.print();
	cout << "박스 2"; box2.print();
	cout << "박스 3"; box3.print();
	cout << "=================================" << endl;
	int vb1 = box1.getVolume();
	int vb2 = box2.getVolume();
	int vb3 = box3.getVolume();
	if (vb1 >= vb2) {
		if (vb1 >= vb3) {
			cout << "박스1의 부피가 가장 큽니다 :" << vb1 << endl;
		}
		else cout << "박스3의 부피가 가장 큽니다 :" << vb3 << endl;
	}
	else cout << "박스2의 부피가 가장 큽니다 :" << vb2 << endl;
}

void main() {
	p2();
}