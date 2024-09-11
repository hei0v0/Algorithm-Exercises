#include <iostream>
using namespace std;

int main() {
    int a[205], b[205];
    int n = 0;
    while (cin >> a[n] >> b[n]) {
        n++;
    }
    for (int i = 0; i < n; i++) {
        if (b[i] == 0)
            continue;
        if (i)
            cout << " ";
        cout << a[i] * b[i] << " " << b[i] - 1;
    }
    if (n == 1 && b[0] == 0) {
        cout << "0 0";
    }
    return 0;
}