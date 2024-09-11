#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str[3];
    string s[3][20];
    int len[3] = {0};
    getline(cin, str[0]);
    getline(cin, str[1]);
    getline(cin, str[2]);

    for (int j = 0; j < 3; j++) {
        bool ready = false;
        string x = "";
        for (int i = 0; i < str[j].length(); i++) {
            if (str[j][i] == '[')
                ready = true;
            else if (str[j][i] == ']' && ready) {
                ready = false;
                s[j][len[j]++] = x;
                x = "";
            } else if (ready) {
                x += str[j][i];
            }
        }
    }

    int n;
    cin >> n;
    while (n--) {
        int l1, l2, m, r1, r2;
        cin >> l1 >> l2 >> m >> r2 >> r1;
        if (l1 <= len[0] && r1 <= len[0] && l2 <= len[1] && r2 <= len[1] && m <= len[2] && l1 > 0 && l2 > 0 && m > 0 && r1 > 0 && r2 > 0) {
            cout << s[0][l1 - 1] << "(" << s[1][l2 - 1] << s[2][m - 1] << s[1][r2 - 1] << ")" << s[0][r1 - 1] << "\n";
        } else {
            cout << "Are you kidding me? @\\/@\n";
        }
    }
    return 0;
}