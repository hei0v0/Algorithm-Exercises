#include <iostream>
#include <string>
using namespace std;

int main() {
    char type;
    string str;
    cin >> type;
    getchar();
    getline(cin, str);
    if (type == 'C') {
        int num = 1;
        char pre = str[0];
        for (int i = 1; i < str.length(); i++) {
            if (pre == str[i]) {
                num++;
            } else {
                if (num == 1)
                    cout << pre;
                else
                    cout << num << pre;
                num = 1;
                pre = str[i];
            }
        }
        if (num == 1)
            cout << pre;
        else
            cout << num << pre;
    } else if (type == 'D') {
        for (int i = 0; i < str.length(); i++) {
            if (str[i] >= '0' && str[i] <= '9') {
                int t = str[i] - '0';
                i++;
                while (str[i] >= '0' && str[i] <= '9') {
                    t = t * 10 + str[i] - '0';
                    i++;
                }
                char c = str[i];
                while (t--) {
                    cout << c;
                }
            } else
                cout << str[i];
        }
    }
    return 0;
}