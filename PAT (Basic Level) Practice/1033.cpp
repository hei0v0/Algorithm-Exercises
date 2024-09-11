#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s, str;
    getline(cin, s);
    getline(cin, str);
    bool up = true;
    bool none = true;
    string ans = "";
    if (s.find('+') != string::npos)
        up = false;
    for (int i = 0; i < str.length(); i++) {
        int x = str[i];
        if (x == '_') {
            ans += "_";
            continue;
        }
        if (!up && x >= 'A' && x <= 'Z')
            continue;
        if (x >= 'a' && x <= 'z')
            x = toupper(x);
        if (s.find(x) == string::npos) {
            ans += str[i];
            none = false;
        }
    }
    if (none)
        cout << "\n";
    else
        cout << ans;
    return 0;
}