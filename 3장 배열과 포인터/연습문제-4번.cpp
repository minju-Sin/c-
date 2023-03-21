// 0~9까지의 난수를 100번 생성하여 가장 많이 생성된 수를 출력하는 프로그램
// 난수 rand() 함수 이용 
#include <iostream>
#include <time.h>
using namespace std;

int main() {
	srand(time(NULL));
	const int N = 100;
	int num = 0, max = 0, index = 0; 
	int rand_num[N] = { 0 }; //난수 생성 배열 
	int count_num[10] = { 0 }; // 1~10 숫자 세기 배열

	for (int i = 0; i < N; i++) {
		rand_num[i] = rand() % 10; //난수 생성
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
	cout << "가장 많이 생성된 수 : " << index << endl;
	
	



	return 0;
}