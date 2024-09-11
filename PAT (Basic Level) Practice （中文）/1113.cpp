#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;
    int c = 0;
    string ans = "";
    for (int i = a.length() - 1, j = b.length() - 1; i >= 0 || j >= 0 || c > 0; i--, j--) {
        if (i >= 0)
            if (a[i] >= '0' && a[i] <= '9')
                c += a[i] - '0';
            else
                c += 10 + (a[i] - 'a');
        if (j >= 0)
            if (b[j] >= '0' && b[j] <= '9')
                c += b[j] - '0';
            else
                c += 10 + (b[j] - 'a');
        if (c % 30 < 10)
            ans += (char)(c % 30 + '0');
        else
            ans += (char)(c % 30 - 10 + 'a');
        c /= 30;
    }
    bool f = true;
    for (int i = ans.length() - 1; i >= 0; i--) {
        if (ans[i] == '0' && f)
            continue;
        cout << ans[i];
        f = false;
    }
    if (f)
        cout << "0";
    return 0;
}