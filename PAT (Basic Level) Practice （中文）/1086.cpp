#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int c = a * b;
    bool flag = true;
    while (c > 0) {
        if (!(c % 10 == 0 && flag)) {
            flag = false;
            cout << c % 10;
        }
        c /= 10;
    }
    if (flag)
        cout << "0";
    return 0;
}