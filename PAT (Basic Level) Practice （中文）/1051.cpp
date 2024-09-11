#include <cmath>
#include <iostream>
using namespace std;

int main() {
    double r1, p1, r2, p2;
    cin >> r1 >> p1 >> r2 >> p2;
    long long a = 0.0, b = 0.0;
    long long a1 = r1 * cos(p1) * 10000, b1 = r1 * sin(p1) * 10000;
    long long a2 = r2 * cos(p2) * 10000, b2 = r2 * sin(p2) * 10000;
    a = a1 * a2 - b1 * b2;
    b = a1 * b2 + a2 * b1;
    if (b < 0)
        printf("%.2lf%.2lfi", a * 1.0 / 100000000, b * 1.0 / 100000000);
    else
        printf("%.2lf+%.2lfi", a * 1.0 / 100000000, b * 1.0 / 100000000);
    return 0;
}