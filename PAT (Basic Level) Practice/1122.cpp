#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, t[100005] = {0}, x;
    vector<int> list;
    cin >> n;
    while (n--) {
        cin >> x;
        if (x % 2 != 0) {
            if (t[x] == 0)
                list.push_back(x);
            t[x]++;
        }
    }
    for (int i = 0; i < list.size(); i++) {
        if (t[list[i]] % 2 != 0)
            cout << list[i];
    }
    return 0;
}