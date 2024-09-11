#include <iostream>
#include <string>
using namespace std;

int main() {
    string n;
    cin >> n;
    int num[10] = {0};
    for (int i = 0; i < n.length(); i++) {
        num[n[i] - '0']++;
    }
    for (int i = 0; i < 10; i++) {
        if (num[i]) {
            cout << i << ":" << num[i] << '\n';
        }
    }
    return 0;
}