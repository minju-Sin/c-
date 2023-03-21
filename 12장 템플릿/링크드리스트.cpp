// ��ũ�帮��Ʈ
#include <iostream>
using namespace std;

template <typename T>
class Node {
public:
	T date;
	Node<T>* next;

	template <typename T> // �ܺ� �Լ� �������� �̹��� ����
	friend ostream& operator<<(ostream& os, const Node<T>* p); // ���� ����Ʈ�� ��� ������ ���
	
	Node(); //default ������
	Node(T d); // �Ű����� �ִ� ������

	void setBack(Node <T>* p, T d);
};

template<typename T>
Node<T>::Node() { // default ������
	data = 0;
	next = NULL;
}

template<typename T>
Node<T>::Node(T d) { // �Ű����� �ִ� ������
	data = d;
	next = NULL;
}

template<typename T>
void Node<T>::setBack(Node <T>* p, T d) { // ������ ���� �����Ͱ� �Ű������� ����
	Node<T>* temp; // new ��� ����
	temp = new Node<T>; // �Ű����� ���� ������
	temp->data = d;
	temp->next = NULL;

	if (p->next == NULL) {
		p->next = temp; // ���� node�� �������̸� ������ ����
	}
	else { // ���� node�� �������� �ƴϸ� ������ ã�� ���� 
		while (p->next != NULL) p = p->next;
		p->next = temp;

		/*
		���� ��带 �����ϰ�
		��带 ���� ������ �̿� �� ������ ��� ã��
		������ ���� ���� ��� ����
		*/
	}
}

// �Ϲ��Լ�
// ��ü ��ũƮ ����Ʈ �����ϴ� �Լ�
template<typename T>
void DeleteNode(Node <T>* p) {
	while (p) {
		Node<T>* temp = p; // p ����Ű�� ��带 temp�� ����
		p = p->next; // p�� ���� ��带 ����Ŵ
		delete temp;
	}
}

template<typename T>
ostream& operator<<(ostream& os, const Node<T>* p) { // ���� ����Ʈ�� ��� ������ ���
	while (p) {
		os << p->data << " ";
		p = p->next;
	}
	return os;
}

int main() {
	// int�� ��� 
	Node<int>* node;
	node = new Node<int>(10); // �Ű����� �ִ� ������ ȣ��, ���� ���(��ü)�� 10 ����
	for (int i = 0; i < 5; i++) { // �� ������ ��� �Ѱ� �����ϰ� 10 ����, ���� ��ü ���� ����
		node->setBack(node, i + 1); // ��� �Ѱ��� ����� �����ϰ� ���� ��忡�� ����
	}
	cout << "int�� : ";
	cout << node << endl; // 10, 1, 2, 3, 4, 5
	DeleteNode(node);

	// double�� ���
	Node<double>* dnode;
	dnode = new Node<double>(10.5); // �Ű����� �ִ� ������ ȣ��, ���� ���(��ü)�� 10.5 ����
	for (int i = 0; i < 5; i++) { // �� ������ ��� �Ѱ� �����ϰ� 10.5 ����, ���� ��ü ���� ����
		dnode->setBack(dnode, (i + 1)*1.1); // ��� �Ѱ��� ����� �����ϰ� ���� ��忡�� ����
	}
	cout << "double�� : ";
	cout << dnode << endl; // 10, 1.1, 2.2, 3.3, 4.4, 5.5
	DeleteNode(dnode);

	return 0;
}