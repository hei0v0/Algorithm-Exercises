#include <iostream>
using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    int a[1005] = {0};
    int maxn = 0;
    while (n--) {
        int an, pn, s;
        scanf("%d-%d %d", &an, &pn, &s);
        a[an] += s;
        if (a[an] > a[maxn])
            maxn = an;
    }
    printf("%d %d", maxn, a[maxn]);
    return 0;
}