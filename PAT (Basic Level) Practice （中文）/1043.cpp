#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int a[256] = {0};
    for (int i = 0; i < s.length(); i++) {
        a[s[i]]++;
    }
    bool flag = true;
    while (flag) {
        flag = false;
        if (a['P']) {
            cout << 'P';
            a['P']--;
            flag = true;
        }
        if (a['A']) {
            cout << 'A';
            a['A']--;
            flag = true;
        }
        if (a['T']) {
            cout << 'T';
            a['T']--;
            flag = true;
        }
        if (a['e']) {
            cout << 'e';
            a['e']--;
            flag = true;
        }
        if (a['s']) {
            cout << 's';
            a['s']--;
            flag = true;
        }
        if (a['t']) {
            cout << 't';
            a['t']--;
            flag = true;
        }
    }
    return 0;
}