#include <iostream>
using namespace std;

int main() {
    int n;
    char c;
    cin >> n >> c;
    for (int i = 0; i < n; i++) cout << c;
    cout << "\n";
    for (int i = 1; i < (n + 1) / 2 - 1; i++) {
        cout << c;
        for (int j = 1; j < n - 1; j++) cout << " ";
        cout << c << "\n";
    }
    for (int i = 0; i < n; i++) cout << c;
    return 0;
}