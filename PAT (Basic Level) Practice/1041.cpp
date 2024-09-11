#include <iostream>
#include <string>
using namespace std;

string a[1005];
int b[1005];

int main() {
    int n, y, z;
    string x;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x >> y >> z;
        a[y] = x;
        b[y] = z;
    }
    int k;
    cin >> k;
    while (k--) {
        cin >> y;
        cout << a[y] << " " << b[y] << "\n";
    }
    return 0;
}