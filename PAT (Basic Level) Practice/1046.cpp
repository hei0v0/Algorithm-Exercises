#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int ansa = 0, ansb = 0;
    while (n--) {
        int a1, a2, b1, b2;
        cin >> a1 >> a2 >> b1 >> b2;
        if (a2 == a1 + b1)
            ansb++;
        if (b2 == a1 + b1)
            ansa++;
        if (a2 == a1 + b1 && b2 == a1 + b1) {
            ansb--;
            ansa--;
        }
    }
    cout << ansa << ' ' << ansb;
    return 0;
}