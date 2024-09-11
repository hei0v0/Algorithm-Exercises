#include <iostream>
using namespace std;

int main() {
    int n, t;
    cin >> n >> t;
    bool flag = false, tot = false;
    int max = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x > t && !flag) {
            printf("[%d, ", i);
            flag = true;
        } else if (x <= t && flag) {
            printf("%d]\n", i - 1);
            flag = false;
        }
        if (x > max)
            max = x;
    }
    if (flag)
        printf("%d]\n", n - 1);
    if (max <= t)
        printf("%d", max);
    return 0;
}