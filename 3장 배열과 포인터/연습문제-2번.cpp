// 1차원 배열 => 벡터
// 두 개의 벡터를 더하는 함수 => vector_add()
#include <iostream>
using namespace std;
void vector_add(int vector1[], int vector, int vector2[]);

int main() {
	const int vector = 3;
	int vector1[vector] = { 0 }; //첫 번째 벡터
	int vector2[vector] = { 0 }; //두 번째 벡터 
	cout << "첫 번째 벡터를 입력하세요: ";
	for (int i = 0; i < vector; i++) {
		cin >> vector1[i];
	}
	cout << "두 번째 벡터를 입력하세요: ";
	for (int i = 0; i < vector; i++) {
		cin >> vector2[i];
	}
	vector_add(vector1, vector, vector2);
	return 0;
}

void vector_add(int vector1[], int vector, int vector2[]) {
	int sum = 0; //합 
	for (int sum = 0; sum < vector; sum++) {
		for (int i = 0; i < vector; i++) {
			sum = vector1[i] + vector2[i];
			cout << sum << " ";
		}
		cout << "입니다." << endl;
	}
}