//��հ� ǥ������ ���ϴ� ���α׷� 
#include <iostream>
using namespace std;
void p3();
void calc_Avg(double num[], int grade);
void calc_Dev(double num[], int grade);
int main() {
	p3();
	return 0;
}

void p3() {
	const int grade = 10; // ����ڷκ��� 10�� ������ �Ǽ� �ڷḦ �д´�.
	double m = 0, v = 0; // m=�л�, v= ǥ������
	double num[grade] = { 0 };
	for (int i = 0; i < grade; i++) {
		cin >> num[i];
	}
	calc_Avg(num, grade);
	calc_Dev(num, grade);
	
}

//��ձ��ϴ� �Լ�
void calc_Avg(double num[], int grade) { 
	double sum1 = 0, m = 0; // ����, ���
	for (int i = 0; i < grade; i++) {
		sum1 += num[i];
	}
	m = sum1 / grade;
	cout << "����� " << m << "�Դϴ�." << endl;
}

//ǥ������ ���ϴ� �Լ�
void calc_Dev(double num[], int grade) {
	double sum2 = 0,  m = 0, v = 0;
	for (int i = 0; i < grade; i++) {
		sum2 += pow((num[i] - m), 2);
	}
	v = sum2 / grade;
	cout << "ǥ�������� " << v << "�Դϴ�." << endl;
}
