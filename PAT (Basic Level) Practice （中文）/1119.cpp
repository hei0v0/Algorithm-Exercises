#include <cmath>
#include <iostream>
using namespace std;

int main() {
    int n, a[10050], l[10050] = {0}, r[10050] = {0}, ans = 0;
    cin >> n >> a[0];
    for (int i = 1; i < n; i++) {
        cin >> a[i];
        if (a[i] > a[i - 1])
            l[i] = l[i - 1] + 1;
        else if (a[i] == a[i - 1])
            l[i] = l[i - 1];
    }
    for (int i = n - 2; i >= 0; i--) {
        if (a[i] > a[i + 1])
            r[i] = r[i + 1] + 1;
        else if (a[i] == a[i + 1])
            r[i] = r[i + 1];
    }
    for (int i = 0; i < n; i++) {
        ans += 200 + 100 * max(l[i], r[i]);
    }
    cout << ans;
    return 0;
}