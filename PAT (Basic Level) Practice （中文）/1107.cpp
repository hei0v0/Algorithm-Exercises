#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        int tot = 0;
        for (int j = 0; j < m; j++) {
            int x;
            cin >> x;
            if (x > tot)
                tot = x;
        }
        if (i)
            cout << " ";
        cout << tot;
        if (tot > ans)
            ans = tot;
    }
    cout << "\n"
         << ans;
    return 0;
}