//평균과 표준편차 구하는 프로그램 
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
	const int grade = 10; // 사용자로부터 10개 이하의 실수 자료를 읽는다.
	double m = 0, v = 0; // m=분산, v= 표준편차
	double num[grade] = { 0 };
	for (int i = 0; i < grade; i++) {
		cin >> num[i];
	}
	calc_Avg(num, grade);
	calc_Dev(num, grade);
	
}

//평균구하는 함수
void calc_Avg(double num[], int grade) { 
	double sum1 = 0, m = 0; // 총합, 평균
	for (int i = 0; i < grade; i++) {
		sum1 += num[i];
	}
	m = sum1 / grade;
	cout << "평균은 " << m << "입니다." << endl;
}

//표준편차 구하는 함수
void calc_Dev(double num[], int grade) {
	double sum2 = 0,  m = 0, v = 0;
	for (int i = 0; i < grade; i++) {
		sum2 += pow((num[i] - m), 2);
	}
	v = sum2 / grade;
	cout << "표준편차는 " << v << "입니다." << endl;
}
