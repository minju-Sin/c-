// 링크드리스트
#include <iostream>
using namespace std;

template <typename T>
class Node {
public:
	T date;
	Node<T>* next;

	template <typename T> // 외부 함수 원형에도 이문장 포함
	friend ostream& operator<<(ostream& os, const Node<T>* p); // 연결 리스트의 모든 내용을 출력
	
	Node(); //default 생성자
	Node(T d); // 매개변수 있는 생성자

	void setBack(Node <T>* p, T d);
};

template<typename T>
Node<T>::Node() { // default 생성자
	data = 0;
	next = NULL;
}

template<typename T>
Node<T>::Node(T d) { // 매개변수 있는 생성자
	data = d;
	next = NULL;
}

template<typename T>
void Node<T>::setBack(Node <T>* p, T d) { // 노드들의 시작 포인터가 매개변수로 전달
	Node<T>* temp; // new 노드 생성
	temp = new Node<T>; // 매개변수 없는 생성자
	temp->data = d;
	temp->next = NULL;

	if (p->next == NULL) {
		p->next = temp; // 현재 node가 마지막이면 다음에 연결
	}
	else { // 현재 node가 마지막이 아니면 마지막 찾아 연결 
		while (p->next != NULL) p = p->next;
		p->next = temp;

		/*
		저장 노드를 생성하고
		노드를 시작 포인터 이용 맨 마지막 노드 찾고
		마지막 노드와 생성 노드 연결
		*/
	}
}

// 일반함수
// 전체 링크트 리스트 제거하는 함수
template<typename T>
void DeleteNode(Node <T>* p) {
	while (p) {
		Node<T>* temp = p; // p 가리키는 노드를 temp에 저장
		p = p->next; // p는 다음 노드를 가리킴
		delete temp;
	}
}

template<typename T>
ostream& operator<<(ostream& os, const Node<T>* p) { // 연결 리스트의 모든 내용을 출력
	while (p) {
		os << p->data << " ";
		p = p->next;
	}
	return os;
}

int main() {
	// int형 노드 
	Node<int>* node;
	node = new Node<int>(10); // 매개변수 있는 생성자 호출, 현재 노드(객체)에 10 저장
	for (int i = 0; i < 5; i++) { // 위 문장은 노드 한개 생성하고 10 저장, 다음 객체 연결 없음
		node->setBack(node, i + 1); // 노드 한개씩 만들어 저장하고 이전 노드에서 연결
	}
	cout << "int형 : ";
	cout << node << endl; // 10, 1, 2, 3, 4, 5
	DeleteNode(node);

	// double형 노드
	Node<double>* dnode;
	dnode = new Node<double>(10.5); // 매개변수 있는 생성자 호출, 현재 노드(객체)에 10.5 저장
	for (int i = 0; i < 5; i++) { // 위 문장은 노드 한개 생성하고 10.5 저장, 다음 객체 연결 없음
		dnode->setBack(dnode, (i + 1)*1.1); // 노드 한개씩 만들어 저장하고 이전 노드에서 연결
	}
	cout << "double형 : ";
	cout << dnode << endl; // 10, 1.1, 2.2, 3.3, 4.4, 5.5
	DeleteNode(dnode);

	return 0;
}