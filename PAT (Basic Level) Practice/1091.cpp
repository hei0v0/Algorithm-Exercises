#include <iostream>
#include <vector>
using namespace std;

int main() {
    int m;
    scanf("%d", &m);
    while (m--) {
        int k = 0;
        scanf("%d", &k);
        int sq = k * k;
        bool f = false;
        for (int i = 1; i < 10; i++) {
            int tot = sq * i, x = k;
            while (x > 0) {
                if (tot % 10 != x % 10)
                    break;
                x /= 10;
                tot /= 10;
            }
            if (x == 0) {
                f = true;
                printf("%d %d\n", i, sq * i);
                break;
            }
        }
        if (!f)
            printf("No\n");
    }
    return 0;
}