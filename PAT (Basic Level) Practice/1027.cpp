#include <iostream>
using namespace std;

int main() {
    int n;
    char c;
    cin >> n >> c;
    int t = 3, sum = 1;
    while (sum + 2 * t <= n) {
        sum += 2 * t;
        t += 2;
    }
    t -= 2;
    for (int i = t; i >= 1; i -= 2) {
        for (int j = 0; j < (t - i) / 2; j++) cout << " ";
        for (int j = 0; j < i; j++) cout << c;
        cout << "\n";
    }
    for (int i = 3; i <= t; i += 2) {
        for (int j = 0; j < (t - i) / 2; j++) cout << " ";
        for (int j = 0; j < i; j++) cout << c;
        cout << "\n";
    }
    cout << n - sum;
    return 0;
}