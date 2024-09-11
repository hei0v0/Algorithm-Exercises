#include <cmath>
#include <iostream>
using namespace std;

bool check(int x) {
    for (int i = 3; i <= sqrt(x); i++) {
        if (x % i == 0)
            return false;
    }
    return true;
}

int main() {
    int m, n;
    int a[10005];
    a[1] = 2;
    a[2] = 3;
    int p = 3;
    cin >> m >> n;
    for (int i = 5; p <= n; i += 2) {
        if (check(i)) {
            a[p++] = i;
        }
    }
    for (int i = m; i <= n; i++) {
        if (i % 10 != m % 10)
            cout << " ";
        else if (i != m)
            cout << "\n";
        cout << a[i];
    }
    return 0;
}