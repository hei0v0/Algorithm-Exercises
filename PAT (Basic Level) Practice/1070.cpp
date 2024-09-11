#include <algorithm>
#include <cmath>
#include <iostream>
using namespace std;

int n, a[10050];

bool cmp(int a, int b) { return a < b; }

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n, cmp);
    double ans = a[0];
    for (int i = 1; i < n; i++) {
        ans = (ans + a[i]) * 1.0 / 2;
    }
    cout << floor(ans);
    return 0;
}