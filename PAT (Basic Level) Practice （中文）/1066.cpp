#include <iostream>
using namespace std;

int main() {
    int m, n, a, b, re;
    cin >> m >> n >> a >> b >> re;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            int x;
            cin >> x;
            if (x >= a && x <= b)
                x = re;
            if (j)
                printf(" ");
            printf("%03d", x);
        }
        printf("\n");
    }
    return 0;
}