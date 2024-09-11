#include <iostream>
using namespace std;

int main() {
    int n, x;
    int ans = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        ans += x * (n - 1);
    }
    ans = ans * 10 + ans;
    cout << ans;
    return 0;
}