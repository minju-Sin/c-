// ���ڸ� ��Ÿ���� BOX Ŭ���� ���� 
// �ڽ��� ��� �ִ��� Ȯ�� �ϴ� empty ��� �Լ�
// ���Ǹ� ����ϴ� getVolume() ��� �Լ� 
// main���� ���� ���ǰ� ū �ڽ� ��� 
#include <iostream>
using namespace std;
void p2();

class Box {
private:
	int w; //�ظ� ��
	int h; //�ظ� ����
	int v_h; //���� ���� 
public:
	Box(int w = 1, int h = 1, int v_h = 1);
	int getVolume(); //������ ���Ǹ� ����Ͽ� ��ȯ
	void print(); // ���� �ظ���, ���� ����, ������ ��� 
};

Box::Box(int w, int h, int v_h)
	:w(w), h(h), v_h(v_h) {};

int Box::getVolume() {
	return w * h * v_h; //������ ����
}

void Box::print() {
	cout << "�ظ��� : " << w * h << " ���� ���� : " << v_h << " ���� : " << getVolume() << endl;
}

void p2() {
	Box box1(2, 3, 4);
	Box box2(4, 5, 6);
	Box box3;
	cout << "=================================" << endl;
	cout << "�ڽ� 1"; box1.print();
	cout << "�ڽ� 2"; box2.print();
	cout << "�ڽ� 3"; box3.print();
	cout << "=================================" << endl;
	int vb1 = box1.getVolume();
	int vb2 = box2.getVolume();
	int vb3 = box3.getVolume();
	if (vb1 >= vb2) {
		if (vb1 >= vb3) {
			cout << "�ڽ�1�� ���ǰ� ���� Ů�ϴ� :" << vb1 << endl;
		}
		else cout << "�ڽ�3�� ���ǰ� ���� Ů�ϴ� :" << vb3 << endl;
	}
	else cout << "�ڽ�2�� ���ǰ� ���� Ů�ϴ� :" << vb2 << endl;
}

void main() {
	p2();
}