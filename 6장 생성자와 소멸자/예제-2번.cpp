#include <iostream>
using namespace std;

class Time {
private:
	int hour;
	int minute;
	int second;
public:
	Time(); //������, ��������� 0, 0, 0 ����, SetTime �̿�
	Time(int h, int m, int s); //��������� ���ڰ� ����
	void setTime(int h, int m, int s); //��������� ���ڰ� ����
									  //���� ���� ���� �߸��� �ð��̸� �ش� �׸� 0���� ���� 
	void print();
};

// ù��° ������
Time::Time() {
	setTime(0, 0, 0);
}
// �ι�° ������
Time::Time(int h, int m, int s) {
	setTime(h, m, s);
}
// �ð� ���� �Լ�
void Time::setTime(int h, int m, int s) {
	hour = ((0 <= h && h < 24) ? h : 0); // �ð� ����
	minute = ((0 <= m && m < 60) ? m : 0); // �� ����
	second = ((0 <= s && s < 60) ? s : 0); // �� ����
}
//"��:��:��"�� �������� ���
void Time::print() {
	cout << hour << ":" << minute << ":" << second << endl;
}

void main() {
	Time time1;
	Time time2(13, 27, 6);
	Time time3(99, 66, 77);

	time1.print();
	time2.print();
	time3.print();
}