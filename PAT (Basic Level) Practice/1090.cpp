#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    map<int, vector<int>> p;
    while (n--) {
        int x, y;
        cin >> x >> y;
        p[x].push_back(y);
        p[y].push_back(x);
    }
    while (m--) {
        int k;
        cin >> k;
        int book[100050] = {0};
        bool flag = true;
        while (k--) {
            int x;
            cin >> x;
            book[x] = 1;
            for (int i = 0; i < p[x].size(); i++) {
                if (book[p[x][i]] == 1)
                    flag = false;
            }
        }
        if (flag)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}