#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    string a, b;
    getline(cin, a);
    getline(cin, b);
    map<char, int> m;
    for (int i = 0; i < a.length(); i++) {
        if (m[a[i]] == 0) {
            cout << a[i];
            m[a[i]]++;
        }
    }
    for (int i = 0; i < b.length(); i++) {
        if (m[b[i]] == 0) {
            cout << b[i];
            m[b[i]]++;
        }
    }
    return 0;
}