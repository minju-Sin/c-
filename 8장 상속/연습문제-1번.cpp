#include <iostream>
using namespace std;
void p8_1();

class Gate { //상속 
protected:
	bool x, y; // 입력변수 저장
	bool z; // 출력변수 저장
public:
	Gate() {}
	Gate(bool x, bool y, bool z);
	void inputSet(bool xx, bool yy);
	void op();
};
Gate::Gate(bool x, bool y, bool z)
	: x(false), y(false), z(false) {}
void Gate::inputSet(bool xx, bool yy) {
	x = xx;
	y = yy;
	cout << x << " " << y << "->";
}
void Gate::op() {
	cout << z << endl;
}

class ANDGate : public Gate{ //AND class
public:
	ANDGate() {}
	ANDGate(bool x, bool y, bool z);
	void inputSet(bool xx, bool yy);
	void op();
};
ANDGate::ANDGate(bool x, bool y, bool z)
	: Gate(x,y,z) {}
void ANDGate::inputSet(bool xx, bool yy) {
	cout << "AND input : ";
	Gate::inputSet(xx,yy);
}
void ANDGate::op() {  
	z = x && y;
	Gate::op();
}

class ORGate : public Gate { //OR class
public:
	ORGate() {}
	ORGate(bool x, bool y, bool z);
	void inputSet(bool xx, bool yy);
	void op();
};
ORGate::ORGate(bool x, bool y, bool z)
	: Gate(x, y, z) {}
void ORGate::inputSet(bool xx, bool yy) {
	cout << "OR input : ";
	Gate::inputSet(xx, yy);
}
void ORGate::op() {
	z = x || y;
	Gate::op();
}

class XORGate : public Gate { //XOR class
public:
	XORGate() {}
	XORGate(bool x, bool y, bool z);
	void inputSet(bool xx, bool yy);
	void op();
};
XORGate::XORGate(bool x, bool y, bool z)
	: Gate(x, y, z) {}
void XORGate::inputSet(bool xx, bool yy) {
	cout << "XOR input : ";
	Gate::inputSet(xx, yy);
}
void XORGate::op() {
	z = x ^ y;
	Gate::op();
}

void main() {
	p8_1();
}

void p8_1() { // main 
	ANDGate and1;
	ORGate or1;
	XORGate xor1;

	and1.inputSet(true, false);
	and1.op();
	and1.inputSet(true, true);
	and1.op();

	or1.inputSet(true, false);
	or1.op();
	or1.inputSet(true, true);
	or1.op();
	
	xor1.inputSet(true, false);
	xor1.op();
	xor1.inputSet(true, true);
	xor1.op();
}