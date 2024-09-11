#include <iostream>
using namespace std;

int n, m;
int a[105];

int main() {
    cin >> n >> m;
    m %= n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = n - m; i < 2 * n - m; i++) {
        if (i != n - m)
            cout << " ";
        cout << a[i % n];
    }
    return 0;
}