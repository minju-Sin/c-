// ����ڷκ��� �����͸� �Է¹޾� ���, �ִ밪, �ּҰ��� ���ϴ� ���α׷�
// ������ �ԷµǸ� �������� ���̶�� �����Ѵ�.

#include <iostream>
#include <limits.h>
using namespace std;

int average(int sum, int count);
int get_max(int num, int max);
int get_min(int num, int min);
int main() {
	int num;
	int count = 0;
	int sum = 0;
	int max = INT_MAX;
	int min = INT_MIN;
	if (count == 1) { //������ �ԷµǾ��� �� �ִ� �ּҴ� 0�� 
		max = 0;
		min = 0;
	}
	while (1) {
		cout << "�����͸� �Է��Ͻÿ�(�����̸� ����): ";
		cin >> num;

		if (num < 0) { //���� �ԷµǸ� break������ �������� 
			break;
			count++;
		}

		sum += num;
		get_min(num, min);
		get_max(num, max);
	}
	cout << "����� " << average(sum, count) << "�Դϴ�." << endl;
	cout << "�ּҰ��� " << min << "�Դϴ�." << endl;
	cout << "�ִ밪�� " << max << "�Դϴ�." << endl;

	return 0;
}

int average(int sum, int count) {
	return sum / count;
}

int get_max(int num, int max) {
	if (num > max)
		return num;
	else return max;
}

int get_min(int num, int min) {
	if (num < min)
		return num;
	else return min;
}