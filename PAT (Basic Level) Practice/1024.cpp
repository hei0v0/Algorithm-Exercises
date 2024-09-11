#include <iostream>
#include <string>
using namespace std;

int main() {
    string info;
    cin >> info;
    int i = 0;
    while (info[i] != 'E') i++;
    string t = info.substr(1, i - 1);
    int n = stoi(info.substr(i + 1));
    if (info[0] == '-')
        cout << '-';
    if (n < 0) {
        cout << "0.";
        for (int j = 0; j < abs(n) - 1; j++) cout << "0";
        for (int j = 0; j < t.length(); j++) {
            if (t[j] != '.')
                cout << t[j];
        }
    } else {
        cout << t[0];
        int cnt = 0, j = 2;
        for (; j < t.length() && cnt < n; j++, cnt++) {
            cout << t[j];
        }
        if (j == t.length()) {
            for (; cnt < n; cnt++) cout << '0';
        } else {
            cout << '.';
            for (; j < t.length(); j++) cout << t[j];
        }
    }
    return 0;
}