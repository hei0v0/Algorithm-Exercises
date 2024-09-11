#include <cmath>
#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while (b > 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main() {
    int n1, m1, n2, m2, k;
    scanf("%d/%d %d/%d %d", &n1, &m1, &n2, &m2, &k);
    double a1 = 1.0 * n1 * k / m1, a2 = 1.0 * n2 * k / m2;
    if (a1 > a2)
        swap(a1, a2);
    bool flag = false;
    for (int i = ceil(a1); i < a2; i++) {
        if (i > a1 && gcd(i, k) == 1) {
            if (flag)
                printf(" ");
            flag = true;
            printf("%d/%d", i, k);
        }
    }
    return 0;
}