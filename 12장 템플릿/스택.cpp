// 스택 후입선출
#include <iostream>
using namespace std;

// 예외 처리를 위한 클래스 
class FullStack {
private:
	int top, size;
public:
	FullStack(int t, int s) : top(t), size(s) {}
	void show() {
		cout << "stack full -> stack size : " << size << " top :" << top << endl;
	}
};

// 예외 처리를 위한 클래스
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
	T* s; // 저장 공간, 임의 type 데이터 저장 기능 
	int size, top; 
public:
	Stack(int n = 100) : size(n), top(-1) { // 기본 크기 100
		s = new T[size];
	}
	~Stack() { delete[]s; } // 소멸자
	void push(T v);
	T pop();
	bool isEmpty() const { return top == -1; }
	bool isFull() const { return top == size - 1; }
};

template <typename T>
void Stack<T> ::push(T v) {
	if (isFull()) {
		throw FullStack(top, size); // 예외 객체 생성하여 던짐
	}
	s[++top] = v; 
}

template <typename T>
T Stack<T> ::pop() {
	if (isEmpty()) {
		throw EmptyStack(top, size); // 예외 객체 생성하여 던짐
	}
	return s[top--]; // s[top] 반환하고 top 감소 
}

int main() {
	Stack<int> s; // 크기가 100인 정수형 스택
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
	catch (FullStack e) { // push, pop 과정에서 error 객체 던짐 
		e.show();
	}
	catch (EmptyStack e) {
		e.show();
	}
	return 0;
}