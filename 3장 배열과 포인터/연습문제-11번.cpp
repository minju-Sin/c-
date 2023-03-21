#include<iostream>
using namespace std;

void p11();
void get_stat(double A[], double* p_avg, double* p_max, double* p_sum);

int main() {
	p11();
	return 0;
}

void p11() {
	double A[3] = { 1.1,2.2,3.3 };
	double p_avg = 0, p_max = 0, p_sum = 0;
	get_stat(A, &p_avg, &p_max, &p_sum);
	cout << "¹è¿­ÀÇ Æò±Õ: " << p_avg << ", ÃÖ´ñ°ª: " << p_max << " ÇÕ: " << p_sum << endl;
}

void get_stat(double A[], double* p_avg, double* p_max, double* p_sum) {
	double sum = 0;
	double max = 0;
	for (int i = 0; i < 3; i++) {
		sum += A[i];
		if (A[i] > max) {
			max = A[i];
		}
	}
	*p_avg = sum / 3;
	*p_max = max;
	*p_sum = sum;
	
}

