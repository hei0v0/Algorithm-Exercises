#include <cmath>
#include <iostream>
using namespace std;

int main() {
    int n, sub[10050] = {0}, max = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        int x;
        scanf("%d", &x);
        sub[abs(x - i)]++;
        if (abs(x - i) > max)
            max = abs(x - i);
    }
    for (int i = max; i >= 0; i--) {
        if (sub[i] > 1)
            printf("%d %d\n", i, sub[i]);
    }
    return 0;
}