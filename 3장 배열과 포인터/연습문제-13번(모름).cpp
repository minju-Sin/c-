// ã�� �ٲٱ� ��� ����
// ����ڿ��� 80������ ���ڿ� �Է�
// ã�� ���ڿ� �Է�
// �ٲ� ���ڿ� �Է�
// ���ڿ��� ã�� �ٲ� �� ���ڿ� ���

#include <iostream>
#include <cstring>
using namespace std;

int main() {
	const int num = 80;
	char str[num];
	char find[num];
	char change[num];

	char* pstr;
	char* tmp = new char[num];

	cout << "���ڿ��� �Է��Ͻÿ�: ";
	cin.getline(str, num);
	cout << "ã�� ���ڿ�";
	cin.getline(find, num);
	cout << "�ٲ� ���ڿ�";
	cin.getline(change, num);

	pstr = strstr(str, find); //����ڰ� �Է��� ���ڿ����� ã�� ���ڿ��� ã�´� 
	if (find == NULL) {
		cout << "�Է��Ͻ� ���ڿ��� ã�� �� �����ϴ�." << endl;
	}
	strncpy(tmp, str, pstr - str);
	tmp[pstr - str] = NULL;
	strcat(tmp, change);
	strcat(tmp, pstr + strlen(find));
	strcpy(str, tmp);
	delete[] tmp;

	cout << "���: " << str << endl;
	return 0;
}