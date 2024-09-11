#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[100005];
    int b[100005], c[100005];
    int maxa = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        b[i] = maxa;
        if (a[i] > maxa)
            maxa = a[i];
    }
    int mina = maxa;
    for (int i = n - 1; i >= 0; i--) {
        if (a[i] < mina)
            mina = a[i];
        c[i] = mina;
    }
    vector<int> tot;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] >= b[i] && a[i] <= c[i]) {
            ans++;
            tot.push_back(a[i]);
        }
    }
    cout << ans << "\n";
    for (int i = 0; i < ans; i++) {
        if (i)
            cout << " ";
        cout << tot[i];
    }
    cout << "\n";
    return 0;
}