#include <algorithm>
#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;

bool cmp(string a, string b) {
    string a1 = a.substr(6, 6), b1 = b.substr(6, 6);
    return a1 < b1;
}

int main() {
    int n, m;
    cin >> n;
    map<string, int> map;
    for (int i = 0; i < n; i++) {
        string code;
        cin >> code;
        map[code] = 1;
    }
    cin >> m;
    vector<string> mate, other;
    for (int i = 0; i < m; i++) {
        string code;
        cin >> code;
        if (map[code] == 1) {
            mate.push_back(code);
        } else {
            other.push_back(code);
        }
    }
    printf("%d\n", mate.size());
    if (mate.size()) {
        sort(mate.begin(), mate.end(), cmp);
        cout << mate[0];
    } else {
        sort(other.begin(), other.end(), cmp);
        cout << other[0];
    }
    return 0;
}