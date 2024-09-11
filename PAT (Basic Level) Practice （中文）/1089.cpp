#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
    }
    bool flag = true;
    for (int i = 1; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
            vector<int> lie, a(n + 1, 1);
            a[i] = a[j] = -1;
            for (int k = 1; k <= n; k++) {
                if (v[k] * a[abs(v[k])] < 0)
                    lie.push_back(a[k]);
            }
            if (lie.size() == 2 && lie[0] * lie[1] < 0) {
                flag = false;
                cout << i << " " << j;
            }
        }
        if (!flag)
            break;
    }
    if (flag)
        cout << "No Solution";
    return 0;
}