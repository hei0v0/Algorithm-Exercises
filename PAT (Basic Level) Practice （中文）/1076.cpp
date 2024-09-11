#include <iostream>
#include <vector>
using namespace std;

int n;
vector<int> ans;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 1; j <= 4; j++) {
            char c, non, t;
            cin >> c >> non >> t;
            if (t == 'T')
                ans.push_back((int)(c - 'A' + 1));
        }
    }
    for(int i=0;i<ans.size();i++){
        cout << ans[i];
    }
    return 0;
}