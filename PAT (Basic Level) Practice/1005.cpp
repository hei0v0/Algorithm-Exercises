#include <algorithm>
#include <iostream>
using namespace std;

int k;
int a[1005];
int b[1005] = {0};
int p = 0;

int cmp(int a, int b) { return a - b; }

int main() {
    cin >> k;
    for (int i = 0; i < k; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < k; i++) {
        int x = a[i];
        if (b[x] == 2)
            continue;
        b[x] = 1;
        while (x != 1) {
            if (x % 2 == 0)
                x /= 2;
            else
                x = (3 * x + 1) / 2;
            if (x <= 100)
                b[x] = 2;
        }
    }
    for (int i = 100; i > 0; i--) {
        if (b[i] == 1) {
            if (p++)
                cout << " ";
            cout << i;
        }
    }
    return 0;
}