#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a1 = 0, a2 = 0, a2f = 1, a3 = 0, a4sum = 0, a4num = 0, a5 = 0;
    bool p1 = false, p2 = false, p3 = false, p4 = false, p5 = false;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        switch (x % 5) {
        case 0:
            if (x % 10 == 0) {
                a1 += x;
                p1 = true;
            }
            break;
        case 1:
            a2 += a2f * x;
            a2f *= -1;
            p2 = true;
            break;
        case 2:
            a3++;
            p3 = true;
            break;
        case 3:
            a4sum += x;
            a4num++;
            p4 = true;
            break;
        case 4:
            if (x > a5)
                a5 = x;
            p5 = true;
            break;
        }
    }
    if (p1)
        cout << a1 << " ";
    else
        cout << "N ";
    if (p2)
        cout << a2 << " ";
    else
        cout << "N ";
    if (p3)
        cout << a3 << " ";
    else
        cout << "N ";
    if (p4)
        printf("%.1lf ", a4sum * 1.0 / a4num);
    else
        cout << "N ";
    if (p5)
        cout << a5;
    else
        cout << "N";
    return 0;
}