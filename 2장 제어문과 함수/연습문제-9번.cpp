// �� ��ǥ�� �Ÿ��� ���ϴ� ���α׷� 
#include <iostream>
#include <cmath>
using namespace std;

void P9();
double dist_2d(double x1, double y1, double x2, double y2);

int main(void) {

    P9();
    return 0;
}

void P9() {
    double x1 = 0, y1 = 0, x2 = 0, y2 = 0;
    double dist = 0;
    cout << "ù ��° ��ǥ�� �Է��ϼ���: ";
    cin >> x1 >> y1;
    cout << "�� ��° ��ǥ�� �Է��ϼ���: ";
    cin >> x2 >> y2;

    cout << "�Ÿ��� ���Ͻÿ�:";
    dist = dist_2d(x1, y1, x2, y2);
    cout << dist << endl;
}
double dist_2d(double x1, double y1, double x2, double y2) {

    return sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
}