#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string a, b;
    vector<char> p;
    cin >> a >> b;
    int i = 0, j = 0;
    for (; i < a.length() && j < b.length(); i++, j++) {
        while (a[i] != b[j]) {
            char x = a[i];
            if (x >= 'a' && x <= 'z') {
                x = toupper(x);
            }
            vector<char>::iterator result = find(p.begin(), p.end(), x);
            if (result == p.end()) {
                p.push_back(x);
            }
            i++;
        }
    }
    for (; i < a.length(); i++) {
        if (a[i] != b[j]) {
            char x = a[i];
            if (x >= 'a' && x <= 'z') {
                x = toupper(x);
            }
            vector<char>::iterator result = find(p.begin(), p.end(), x);
            if (result == p.end()) {
                p.push_back(x);
            }
        }
    }
    for (auto x : p) {
        cout << x;
    }
    return 0;
}