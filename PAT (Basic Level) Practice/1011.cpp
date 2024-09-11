#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        long long a, b, c;
        cin >> a >> b >> c;
        if (a + b > c)
            cout << "Case #" << i << ": true\n";
        else
            cout << "Case #" << i << ": false\n";
    }
    return 0;
}