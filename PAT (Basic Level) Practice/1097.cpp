#include <iostream>
using namespace std;

int main() {
    int n, k, x;
    scanf("%d%d%d", &n, &k, &x);
    int a[105][105] = {0};
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            scanf("%d", &a[i][j]);
    int p = 1;
    for (int i = 1; i <= n; i += 2) {
        for (int j = n; j > p; j--) {
            a[i][j] = a[i][j - p];
        }
        for (int j = 1; j <= p; j++) {
            a[i][j] = x;
        }
        p = p % k + 1;
    }
    for (int j = 1; j <= n; j++) {
        if (j > 1)
            printf(" ");
        int sum = 0;
        for (int i = 1; i <= n; i++) {
            sum += a[i][j];
        }
        printf("%d", sum);
    }
    return 0;
}