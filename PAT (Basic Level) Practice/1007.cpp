#include <cmath>
#include <iostream>
using namespace std;

int a[100005] = {0};
int p = 3, n;

bool check(int x) {
    for (int i = 3; i <= sqrt(x); i += 2) {
        if (x % i == 0)
            return false;
    }
    return true;
}

int main() {
    cin >> n;
    a[1] = 2;
    a[2] = 3;
    int num = 0;
    for (int i = 5; i <= n; i += 2) {
        if (check(i)) {
            if (i - a[p - 1] == 2)
                num++;
            a[p++] = i;
        }
    }
    cout << num;
    return 0;
}