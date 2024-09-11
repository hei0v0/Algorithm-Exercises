#include <iostream>
using namespace std;

int main() {
    int n, k, x;
    int a[105] = {0};
    cin >> n;
    while (n--) {
        cin >> x;
        a[x]++;
    }
    cin >> k;
    for (int i = 0; i < k; i++) {
        cin >> x;
        if (i)
            cout << " ";
        cout << a[x];
    }
    return 0;
}