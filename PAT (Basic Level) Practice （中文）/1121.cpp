#include <iostream>
#include <string>
using namespace std;

int main() {
    int k;
    cin >> k;
    while (k--) {
        string s;
        cin >> s;
        bool flag = true;
        for (int i = 2; i <= s.length(); i++) {
            int x = stoi(s.substr(0, i));
            if (x % i != 0) {
                flag = false;
                printf("No\n");
                break;
            }
        }
        if (flag)
            printf("Yes\n");
    }
    return 0;
}