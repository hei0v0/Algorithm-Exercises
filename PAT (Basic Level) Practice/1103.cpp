#include <iostream>
#include <map>
using namespace std;

int main() {
    int m, n;
    scanf("%d%d", &m, &n);
    map<long long, int> check;
    int max = 0;
    for (int i = m; i <= n; i++) {
        long long x = i * i * i - (i - 1) * (i - 1) * (i - 1);
        check[x] = i;
        if (x > max)
            max = x;
    }
    bool flag = true;
    for (int i = 2;; i++) {
        long long x = i * i + (i - 1) * (i - 1);
        x = x * x;
        if (x > max)
            break;
        if (check[x] != 0) {
            printf("%d %d\n", check[x], i);
            flag = false;
        }
    }
    if (flag)
        printf("No Solution\n");
    return 0;
}