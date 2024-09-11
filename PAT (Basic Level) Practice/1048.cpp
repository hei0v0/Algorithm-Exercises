#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;
    string ans = "";
    char item[] = {'J', 'Q', 'K'};
    for (int j = b.length() - 1, i = a.length() - 1, k = 1; j >= 0 || i >= 0; j--, i--, k++) {
        int xa, xb;
        if (i >= 0)
            xa = a[i] - '0';
        else
            xa = 0;
        if (j >= 0)
            xb = b[j] - '0';
        else
            xb = 0;
        if (k % 2 == 0) {
            int x = xb - xa;
            while (x < 0) x += 10;
            ans = to_string(x) + ans;
        } else {
            int x = (xa + xb) % 13;
            if (x < 10) {
                ans = to_string(x) + ans;
            } else {
                ans = item[x % 10] + ans;
            }
        }
    }
    cout << ans;
    return 0;
}