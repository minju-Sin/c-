// ������������ �ظ� ���ϴ� ���α׷�
#include <iostream>
#include <cmath>
using namespace std;

void P10();
void quad_eqn(double a, double b, double c);

int main(void) {

    P10();
    return 0;
}
void P10() {
    double a = 0, b = 0, c = 0;

    quad_eqn(a, b, c);
}


void quad_eqn(double a, double b, double c) {
    cout << "2���������� ����� �Է��Ͻÿ�." << endl;
    cout << "a:";
    cin >> a;
    cout << "b:";
    cin >> b;
    cout << "c:";
    cin >> c;

    double D, x1, x2;

    D = pow(b, 2) - 4 * a * c;

    if (D > 0) {
        x1 = (-b + sqrt(D)) / (2 * a);
        x2 = (-b - sqrt(D)) / (2 * a);

        cout << "���� " << x1 << "�� " << x2 << "�Դϴ�." << endl;
    }
    else if (D == 0) {
        x1 = (-b + sqrt(D)) / (2 * a); //�߱�
        cout << "���� " << x1 << "�Դϴ�." << endl;
    }
    else {
        cout << "���� �����ϴ�.";
    }
}