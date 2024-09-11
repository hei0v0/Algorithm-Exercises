#include <iostream>
using namespace std;

int main() {
    int a[1050];
    int n;
    cin >> n;
    a[1] = 2;
    a[2] = 0;
    a[3] = 1;
    a[4] = 9;
    for (int i = 1; i <= n; i++) {
        if (i > 4)
            a[i] = (a[i - 1] + a[i - 2] + a[i - 3] + a[i - 4]) % 10;
        cout << a[i];
    }
    return 0;
}