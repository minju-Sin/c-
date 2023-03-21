// 학생들의 성적을 입력받아 평균을 구하는 프로그램


#include <iostream>
using namespace std;

int main() {
	const int STUDENTS = 10;
	int grade[STUDENTS];
	int sum = 0;
	int average;

	for (int i = 0; i < STUDENTS; i++) {
		cout << "학생들의 성적을 입력하시오: ";
		cin >> grade[i];
		sum += grade[i];
		average = sum / STUDENTS;
	}
	cout << "성적 평균 = " << average << endl;

	return 0;
}