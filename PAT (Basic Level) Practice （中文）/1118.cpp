#include <cmath>
#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    map<string, int> m;
    m["ling"] = 0;
    m["yi"] = 1;
    m["er"] = 2;
    m["san"] = 3;
    m["si"] = 4;
    m["wu"] = 5;
    m["liu"] = 6;
    m["qi"] = 7;
    m["ba"] = 8;
    m["jiu"] = 9;
    for (int i = 0; i < 11; i++) {
        string str;
        getline(cin, str);
        if (str[0] >= '0' && str[0] <= '9') {
            if (str.length() == 1) {
                printf("%c", str[0]);
                continue;
            }
            int x = str[0] - '0', j = 1;
            while (str[j] >= '0' && str[j] <= '9') {
                x = x * 10 + (str[j] - '0');
                j++;
            }
            int y = stoi(str.substr(j + 1, str.length() - j - 1));
            if (str[j] == '+')
                printf("%d", x + y);
            else if (str[j] == '-')
                printf("%d", x - y);
            else if (str[j] == '*')
                printf("%d", x * y);
            else if (str[j] == '/')
                printf("%d", x / y);
            else if (str[j] == '%')
                printf("%d", x % y);
            else if (str[j] == '^')
                printf("%d", (int)pow(x, y));
        } else {
            if (str.substr(0, 4).compare("sqrt") == 0) {
                int x = stoi(str.substr(4, str.length() - 4));
                printf("%d", (int)sqrt(x));
            } else {
                printf("%d", m[str]);
            }
        }
    }
    return 0;
}