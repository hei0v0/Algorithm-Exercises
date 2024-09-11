#include <iostream>
using namespace std;

int main() {
    int n, m;
    int score[105], ans[105];
    cin >> n >> m;
    for (int i = 0; i < m; i++)
        cin >> score[i];
    for (int i = 0; i < m; i++)
        cin >> ans[i];
    while (n--) {
        int sum = 0;
        for (int i = 0; i < m; i++) {
            int a = 0;
            cin >> a;
            if (a == ans[i])
                sum += score[i];
        }
        cout << sum << "\n";
    }
    return 0;
}