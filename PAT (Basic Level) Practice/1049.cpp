#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long ans = 0;
    for (int l = 0, r = n - 1; l < n; l++, r--) {
        double x;
        cin >> x;
        long long a = x * 1000;
        if (l)
            a *= l + 1;
        if (r)
            a *= r + 1;
        ans += a;
    }
    printf("%.2lf", ans * 1.0 / 1000.0);
    return 0;
}