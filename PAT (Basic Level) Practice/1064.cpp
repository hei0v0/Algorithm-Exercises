#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int ans[100] = {0};
    int num = 0;
    while (n--) {
        int x, sum = 0;
        cin >> x;
        while (x > 0) {
            sum += x % 10;
            x /= 10;
        }
        if (ans[sum] == 0)
            num++;
        ans[sum]++;
    }
    cout << num << "\n";
    for (int i = 0, j = 0; i < 100 && j < num; i++) {
        if (ans[i]) {
            if (j)
                cout << " ";
            cout << i;
            j++;
        }
    }
    return 0;
}