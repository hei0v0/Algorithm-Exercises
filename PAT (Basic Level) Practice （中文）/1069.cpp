#include <iostream>
#include <map>
#include <string>
using namespace std;

int m, n, s;
string name[1050];
map<string, int> match;

int main() {
    cin >> m >> n >> s;
    for (int i = 1; i <= m; i++) {
        cin >> name[i];
        match[name[i]] = 1;
    }
    if(s>m){
        cout << "Keep going...\n";
        return 0;
    }
    while (s <= m) {
        while (match[name[s]] == 0) {
            s++;
        }
        cout << name[s] << "\n";
        match[name[s]] = 0;
        s += n;
    }
    return 0;
}