// 0~9������ ������ 100�� �����Ͽ� ���� ���� ������ ���� ����ϴ� ���α׷�
// ���� rand() �Լ� �̿� 
#include <iostream>
#include <time.h>
using namespace std;

int main() {
	srand(time(NULL));
	const int N = 100;
	int num = 0, max = 0, index = 0; 
	int rand_num[N] = { 0 }; //���� ���� �迭 
	int count_num[10] = { 0 }; // 1~10 ���� ���� �迭

	for (int i = 0; i < N; i++) {
		rand_num[i] = rand() % 10; //���� ����
	}
	for (int i = 0; i < N; i++) {
		num = rand_num[i];
		count_num[num]++;
	}

	for (int i = 0; i < 10; i++) {
		cout << i << ":" << count_num[i] << endl;
		if (max < count_num[i]) {
			max = count_num[i];
			index = i;
		}
	}
	cout << "���� ���� ������ �� : " << index << endl;
	
	



	return 0;
}