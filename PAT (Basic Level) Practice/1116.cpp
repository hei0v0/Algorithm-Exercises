#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;
    if (str.length() % 2 != 0) {
        printf("Error: %d digit(s)", str.length());
        return 0;
    }
    int len = str.length() / 2;
    string s1 = str.substr(0, len), s2 = str.substr(len, len);
    bool flag = true;
    if (len == 1) {
        int x1 = stoi(s1), x2 = stoi(s2);
        if (x2 - x1 != 2)
            printf("No: %d - %d != 2", x2, x1);
        else
            printf("Yes: %d - %d = 2", x2, x1);
    } else {
        int x1 = stoi(s1.substr(len - 2, 2)), x2 = stoi(s2.substr(len - 2, 2));
        if (x2 - x1 != 2)
            flag = false;
        else {
            for (int i = 0; i < len - 2; i++) {
                if (s1[i] != s2[i])
                    flag = false;
            }
        }
        if (flag) {
            printf("Yes: %s - %s = 2", s2.c_str(), s1.c_str());
        } else {
            printf("No: %s - %s != 2", s2.c_str(), s1.c_str());
        }
    }
    return 0;
}