#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    int n;
    int l[105], h[105];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &h[i]);
    }
    for (int i = 0; i < n; i++) {
        scanf("%d", &l[i]);
    }
    sort(h, h + n);
    sort(l, l + n);
    if (h[0] > l[n - 1])
        printf("Yes %d", h[0] - l[n - 1]);
    else
        printf("No %d", l[n - 1] + 1 - h[0]);
    return 0;
}