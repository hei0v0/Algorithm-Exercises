#include <iostream>
using namespace std;

int main() {
    int n;
    int a[100005] = {0};
    int maxn = 0;
    cin >> n;
    for (int j = 0; j < n; j++) {
        int i, score;
        cin >> i >> score;
        if (j == 0)
            maxn = i;
        a[i] += score;
        if (a[i] > a[maxn])
            maxn = i;
    }
    cout << maxn << " " << a[maxn];
    return 0;
}