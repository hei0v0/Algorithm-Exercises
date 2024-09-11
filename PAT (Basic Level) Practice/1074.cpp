#include <iostream>
#include <string>
using namespace std;

string set, a, b;
int ans[25];

int main() {
    cin >> set >> a >> b;
    int i = 0, c = 0;
    for (; i < a.length() || i < b.length() || c > 0; i++) {
        int xa, xb, xs = set[set.length() - 1 - i] - '0';
        if (i < a.length())
            xa = a[a.length() - 1 - i] - '0';
        else
            xa = 0;
        if (i < b.length())
            xb = b[b.length() - 1 - i] - '0';
        else
            xb = 0;
        if (xs == 0)
            xs = 10;
        ans[i] = (xa + xb + c) % xs;
        c = (xa + xb + c) / xs;
    }
    bool flag = true;
    for (int j = i - 1; j >= 0; j--) {
        if (ans[j] == 0 && flag)
            continue;
        cout << ans[j];
        flag = false;
    }
    if (flag)
        cout << 0;
    return 0;
}