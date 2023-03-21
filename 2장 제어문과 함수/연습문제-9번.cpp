// 두 좌표의 거리를 구하는 프로그램 
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
    cout << "첫 번째 좌표를 입력하세요: ";
    cin >> x1 >> y1;
    cout << "두 번째 좌표를 입력하세요: ";
    cin >> x2 >> y2;

    cout << "거리를 구하시오:";
    dist = dist_2d(x1, y1, x2, y2);
    cout << dist << endl;
}
double dist_2d(double x1, double y1, double x2, double y2) {

    return sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
}