// �ܾ��� ������ ���� ���� ����ϴ� ���α׷�

#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	cout << "���ڿ��� �Է��ϼ���: ";
	getline(cin, str); //���ڿ� �Է�
	int consonant = 0,vowel = 0; //���� ����, ���� ����

	for (int i = 0; i < str.length(); i++) {
		//����
		if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
			vowel++;
		}
		else consonant++;
	}
	cout << "������ ����: " << consonant << ", ������ ����: " << vowel << endl;
	return 0;
}