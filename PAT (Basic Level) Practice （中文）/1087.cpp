#include <cmath>
#include <iostream>
using namespace std;

int main() {
    int n, num = 0;
    cin >> n;
    int check[20050] = {0};
    for (int i = 1; i <= n; i++) {
        int x = floor(i / 2) + floor(i / 3) + floor(i / 5);
        if (check[x] == 0) {
            num++;
            check[x] = 1;
        }
    }
    cout << num;
    return 0;
}