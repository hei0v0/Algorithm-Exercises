#include <iostream>
using namespace std;

int main() {
    long long a, b, d;
    cin >> a >> b >> d;
    int sum = a + b;
    int ans[100] = {0};
    int i = 0;
    if (sum == 0) {
        cout << "0";
        return 0;
    }
    while (sum != 0) {
        ans[i++] = sum % d;
        sum /= d;
    }
    while (i != 0) {
        cout << ans[--i];
    }
    return 0;
}