#include <iostream>
using namespace std;

int main() {
    int a = 0, b = 1, c, n;
    cin >> n;
    while (b <= n) {
        c = a + b;
        a = b;
        b = c;
    }
    if (b - n >= n - a)
        cout << a;
    else
        cout << b;
    return 0;
}