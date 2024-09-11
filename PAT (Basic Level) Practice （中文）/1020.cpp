#include <algorithm>
#include <iostream>
using namespace std;

struct goods {
    double w, s, p;
} g[1005];

bool cmp(goods a, goods b) { return a.p > b.p; }

int main() {
    int n, d;
    double ans = 0.0;
    cin >> n >> d;
    for (int i = 0; i < n; i++) {
        cin >> g[i].w;
    }
    for (int i = 0; i < n; i++) {
        cin >> g[i].s;
        g[i].p = g[i].s / g[i].w;
    }
    sort(g, g + n, cmp);
    for (int i = 0; i < n; i++) {
        if (d < g[i].w) {
            ans += g[i].p * d;
            break;
        }
        ans += g[i].s;
        d -= g[i].w;
    }
    printf("%.2lf", ans);
    return 0;
}