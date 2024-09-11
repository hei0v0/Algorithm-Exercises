#include <iostream>
using namespace std;

int main() {
    int n, d, k;
    double le, e;
    cin >> n >> le >> d;
    int a1 = 0, a2 = 0, b = 0;
    for (int i = 0; i < n; i++) {
        cin >> k;
        b = 0;
        for (int j = 0; j < k; j++) {
            cin >> e;
            if (e < le)
                b++;
        }
        if (2 * b > k) {
            if (k > d)
                a2++;
            else
                a1++;
        }
    }
    printf("%.1lf%% %.1lf%%", a1 * 1.0 / n * 100.0, a2 * 1.0 / n * 100.0);
    return 0;
}