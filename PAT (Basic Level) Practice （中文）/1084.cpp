#include <iostream>
#include <string>
using namespace std;

int main() {
    int d, n;
    cin >> d >> n;
    string ans = to_string(d);
    while (--n) {
        string now = "";
        int num = 1;
        char pre = ans[0];
        for (int i = 1; i < ans.length(); i++) {
            if (pre == ans[i])
                num++;
            else {
                now += pre + to_string(num);
                pre = ans[i];
                num = 1;
            }
        }
        now += pre + to_string(num);
        ans = now;
    }
    cout << ans;
    return 0;
}