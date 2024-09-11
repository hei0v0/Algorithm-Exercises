#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() {
    string a;
    int b;
    queue<int> q;
    int r = 0;
    bool flag = true;
    cin >> a >> b;
    for (int i = 0; i < a.length(); i++) {
        int x = r * 10 + a[i] - '0';
        r = x % b;
        if (flag && x / b == 0)
            continue;
        flag = false;
        q.push(x / b);
    }
    if (q.size() == 0) {
        cout << '0';
    } else {
        while (!q.empty()) {
            cout << q.front();
            q.pop();
        }
    }
    cout << " " << r;
    return 0;
}