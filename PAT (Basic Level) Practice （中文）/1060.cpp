#include <algorithm>
#include <iostream>
using namespace std;

bool cmp(int a, int b) {
    return a > b;
}

int main() {
    int n, a[100050] = {0};
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    sort(a + 1, a + n + 1, cmp);
    int ans = 0, p = 1;
    while (ans <= n && a[p] > p) {
        ans++;
        p++;
    }
    cout << ans;
    return 0;
}