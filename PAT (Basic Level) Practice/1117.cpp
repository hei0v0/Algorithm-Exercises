#include <iostream>
using namespace std;

int p[] = {0, 1, 8, 27, 64, 125, 216, 343, 512, 729};

int main() {
    int n1, n2;
    cin >> n1 >> n2;
    if (n2 < 10) {
        printf("1\n");
        for (int i = n1; i <= n2; i++) {
            if (i > n1)
                printf(" ");
            printf("%d", i);
        }
        return 0;
    }
    int a[1050] = {0};
    for (int i = n1; i <= n2; i++) {
        a[i] = i;
    }
    while (1) {
        bool flag = true;
        for (int i = n1; i <= n2; i++) {
            int x = a[i], y = 1, z = 0;
            // printf("%d ", x);
            if (x == 0)
                y = 0;
            else
                while (x > 0) {
                    y = p[x % 10] * y;
                    x /= 10;
                }
            // printf("%d ", y);
            if (y == 0)
                z = 0;
            else
                while (y > 0) {
                    z += y % 10;
                    y /= 10;
                }
            // printf("%d ", z);
            if (z >= 10)
                flag = false;
            a[i] = z;
            // printf("%d\n", a[i]);
        }
        // printf("\n");
        if (flag)
            break;
    }
    int ans[10] = {0}, mmax = 0;
    for (int i = n1; i <= n2; i++) {
        // printf("%d ", a[i]);
        ans[a[i]]++;
        if (ans[a[i]] > mmax)
            mmax = ans[a[i]];
    }
    printf("%d\n", mmax);
    bool f = false;
    for (int i = 0; i < 10; i++) {
        if (ans[i] == mmax) {
            if (f)
                printf(" ");
            printf("%d", i);
            f = true;
        }
    }
    return 0;
}