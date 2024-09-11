#include <cmath>
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    double ans = 0;
    while (n--) {
        int a, b;
        cin >> a >> b;
        double tot = sqrt(a * a + b * b);
        if (tot > ans)
            ans = tot;
    }
    printf("%.2lf", ans);
    return 0;
}