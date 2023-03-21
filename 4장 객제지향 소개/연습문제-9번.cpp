#include <iostream>
#include <string>
using namespace std;
void p9();

void main() {
	p9();
}

void p9() {
	string str;
	int count = 0, word = 0;
	getline(cin, str);
	
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == ' ') {
			count++;
		}
	}
	word = count + 1;
	cout << "단어의 개수: " << word << endl;
}
