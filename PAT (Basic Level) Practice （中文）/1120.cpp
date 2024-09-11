#include <iostream>
using namespace std;

int main() {
    int n, m, p[10005], ans = 0;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = i; j < n; j++) {
            sum += p[j];
            if (sum > m)
                break;
            ans++;
        }
    }
    cout << ans;
    return 0;
}