// string Ŭ����
// ����ڷ� ���� ���ڿ��� �ٸ� ��ǰ ��ȣ���� �˻��ϴ� ���α׷� 
// ��ǰ��ȣ => ũ��:6 + �� 2�� ������ : ���� ���� + �� 4�� ���� : �� ��ȣ
// ����) TV1523 TV -> ���� ���� , 1523 -> �� ��ȣ
// ���ڿ� ����, ���� �� ���� ���ĺ����� ������ ���� �������� Ȯ��
#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	cout << "���ڿ��� �Է��Ͻÿ�: ";
	getline(cin, str);

	if (str.length() != 6) {
		cout << "���ڿ� ���̰� �ùٸ��� �ʽ��ϴ�." << endl;
		getline(cin, str);
	}
	for (int i = 0; i < 2; i++) {
		if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z') {
			cout << "���ĺ��� �½��ϴ�." << endl;
			break;
		}
		else cout << "���ĺ��� �ùٸ��� �ʽ��ϴ�." << endl;
		break;
	}
	for (int i = 2; i < 6; i++) {
		if (str[i] >= '0' && str[i] <= '9') {
			cout << "���ڰ� �½��ϴ�." << endl;
			break;
		}
		else cout << "���ڰ� �ùٸ��� �ʽ��ϴ�." << endl;
		break;
	}
	return 0;
}