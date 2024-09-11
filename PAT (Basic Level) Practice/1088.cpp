#include <iostream>
using namespace std;

void cmp(double m, double x) {
    if (m < x)
        cout << " Cong";
    else if (m == x)
        cout << " Ping";
    else
        cout << " Gai";
}

int main() {
    int m, x, y;
    cin >> m >> x >> y;
    bool flag = true;
    for (int i = 99; i >= 10; i--) {
        int yi = i % 10 * 10 + i / 10;
        if (abs(i - yi) * y == yi * x) {
            flag = false;
            cout << i;
            cmp(m, i);
            cmp(m, yi);
            cmp(m, abs(i - yi) * 1.0 / x);
            break;
        }
    }
    if (flag)
        cout << "No Solution";
    return 0;
}