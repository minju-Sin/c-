// ���� ���Լ���
#include <iostream>
using namespace std;

// ���� ó���� ���� Ŭ���� 
class FullStack {
private:
	int top, size;
public:
	FullStack(int t, int s) : top(t), size(s) {}
	void show() {
		cout << "stack full -> stack size : " << size << " top :" << top << endl;
	}
};

// ���� ó���� ���� Ŭ����
class EmptyStack {
private:
	int top, size;
public:
	EmptyStack(int t, int s) : top(t), size(s) {}
	void show() {
		cout << "stack empty -> stack size : " << size << " top :" << top << endl;
	}
};

template <class T>
class Stack {
private:
	T* s; // ���� ����, ���� type ������ ���� ��� 
	int size, top; 
public:
	Stack(int n = 100) : size(n), top(-1) { // �⺻ ũ�� 100
		s = new T[size];
	}
	~Stack() { delete[]s; } // �Ҹ���
	void push(T v);
	T pop();
	bool isEmpty() const { return top == -1; }
	bool isFull() const { return top == size - 1; }
};

template <typename T>
void Stack<T> ::push(T v) {
	if (isFull()) {
		throw FullStack(top, size); // ���� ��ü �����Ͽ� ����
	}
	s[++top] = v; 
}

template <typename T>
T Stack<T> ::pop() {
	if (isEmpty()) {
		throw EmptyStack(top, size); // ���� ��ü �����Ͽ� ����
	}
	return s[top--]; // s[top] ��ȯ�ϰ� top ���� 
}

int main() {
	Stack<int> s; // ũ�Ⱑ 100�� ������ ����
	try {
		s.push(100);
		s.push(200);
		s.push(300);
		s.push(400);
		cout << s.pop() << endl;
		cout << s.pop() << endl;
		cout << s.pop() << endl;
		cout << s.pop() << endl;
	}
	catch (FullStack e) { // push, pop �������� error ��ü ���� 
		e.show();
	}
	catch (EmptyStack e) {
		e.show();
	}
	return 0;
}