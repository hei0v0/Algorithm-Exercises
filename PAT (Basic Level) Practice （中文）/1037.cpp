#include <cmath>
#include <iostream>
using namespace std;

int main() {
    long long g1, s1, k1, g2, s2, k2;
    scanf("%lld.%lld.%lld", &g1, &s1, &k1);
    scanf("%lld.%lld.%lld", &g2, &s2, &k2);
    long long allk = g2 * 17 * 29 + s2 * 29 + k2 - g1 * 17 * 29 - s1 * 29 - k1;
    if (allk < 0) {
        printf("-");
        allk = abs(allk);
    }
    printf("%lld.%lld.%lld", allk / 29 / 17, allk / 29 % 17, allk % 29);
    return 0;
}