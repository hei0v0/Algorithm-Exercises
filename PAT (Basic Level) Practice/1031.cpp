#include <iostream>
#include <string>
using namespace std;

int w[] = {7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2};
char m[] = {'1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2'};

int main() {
    int n, flag = true;
    cin >> n;
    while (n--) {
        string s;
        cin >> s;
        int sum = 0;
        bool f = true;
        for (int i = 0; i < 17; i++) {
            if (s[i] < '0' || s[i] > '9') {
                f = false;
                break;
            }
            sum += (s[i] - '0') * w[i];
        }
        if (!f || m[sum % 11] != s[17]) {
            cout << s << '\n';
            flag = false;
        }
    }
    if (flag)
        cout << "All passed";
    return 0;
}