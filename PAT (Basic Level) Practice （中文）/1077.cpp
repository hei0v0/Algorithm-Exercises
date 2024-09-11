#include <cmath>
#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        double g1, g2, max = 0, min = m, sum = 0, num = 0;
        cin >> g1;
        for (int j = 0; j < n - 1; j++) {
            cin >> g2;
            if (g2 >= 0 && g2 <= m) {
                num++;
                if (g2 > max)
                    max = g2;
                if (g2 < min)
                    min = g2;
                sum += g2;
            }
        }
        g2 = (sum - max - min) / (num - 2);
        printf("%d\n", (int)round((g1 + g2) / 2.0));
    }
    return 0;
}