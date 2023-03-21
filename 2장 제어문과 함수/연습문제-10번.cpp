// 이차방정식의 해를 구하는 프로그램
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
    cout << "2차방정식의 계수를 입력하시오." << endl;
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

        cout << "근은 " << x1 << "와 " << x2 << "입니다." << endl;
    }
    else if (D == 0) {
        x1 = (-b + sqrt(D)) / (2 * a); //중근
        cout << "근은 " << x1 << "입니다." << endl;
    }
    else {
        cout << "근이 없습니다.";
    }
}