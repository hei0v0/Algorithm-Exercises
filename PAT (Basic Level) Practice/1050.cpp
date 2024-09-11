#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    int w, h;
    for (int i = sqrt(n); i >= 1; i--) {
        if (n % i == 0) {
            w = i;
            h = n / i;
            break;
        }
    }

    vector<vector<int>> b(h, vector<int>(w));
    int px = 0, py = 0;
    int l = -1, r = 0, t = 0, d = 0;
    int j = 0;
    for (int i = n - 1; i >= 0; i--) {
        b[px][py] = a[i];
        switch (j) {
        case 0:
            py++;
            if (py == w - r) {
                py--;
                px++;
                r++;
                j = 1;
            }
            break;
        case 1:
            px++;
            if (px == h - d) {
                px--;
                py--;
                d++;
                j = 2;
            }
            break;
        case 2:
            py--;
            if (py == l) {
                py++;
                px--;
                l++;
                j = 3;
            }
            break;
        case 3:
            px--;
            if (px == t) {
                px++;
                py++;
                t++;
                j = 0;
            }
            break;
        }
    }

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if (j)
                cout << ' ';
            cout << b[i][j];
        }
        cout << "\n";
    }
    return 0;
}
