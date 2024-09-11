#include <algorithm>
#include <iostream>
using namespace std;

int n;
int a[105], b[105];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    int p = 1;
    while (b[p] >= b[p - 1]) p++;
    int q = p;
    for (; q < n; q++) {
        if (a[q] != b[q])
            break;
    }
    if (q == n) {
        cout << "Insertion Sort\n";
        sort(a, a + p + 1);
    } else {
        cout << "Merge Sort\n";
        int k = 1, flag = 1;
        while (flag && k < n) {
            flag = 0;
            for (int i = 0; i < n; i++) {
                if (a[i] != b[i]) {
                    flag = 1;
                }
            }
            k *= 2;
            for (int i = 0; i < n / k; i++) {
                sort(a + i * k, a + (i + 1) * k);
            }
            sort(a + n / k * k, a + n);
        }
    }
    for (int i = 0; i < n; i++) {
        if (i)
            cout << " ";
        cout << a[i];
    }
    return 0;
}