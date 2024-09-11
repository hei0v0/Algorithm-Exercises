#include <iostream>
#include <string>
using namespace std;

string day[] = {"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};

int main() {
    string str[4];
    int p = 0;
    int d, h, m;
    for (int i = 0; i < 4; i++) {
        cin >> str[i];
    }
    for (int i = 0; i < str[0].length() && i < str[1].length(); i++) {
        if (str[0][i] == str[1][i]) {
            if (p == 0) {
                if (str[0][i] >= 'A' && str[0][i] <= 'G') {
                    d = str[0][i] - 'A';
                    cout << day[d] << " ";
                    p = 1;
                }
            } else if (p == 1) {
                if (str[0][i] >= '0' && str[0][i] <= '9') {
                    h = str[0][i] - '0';
                    cout << "0" << h << ":";
                    break;
                } else if (str[0][i] >= 'A' && str[0][i] <= 'N') {
                    h = str[0][i] - 'A' + 10;
                    cout << h << ":";
                    break;
                }
            }
        }
    }
    for (int i = 0; i < str[2].length() && i < str[3].length(); i++) {
        if (str[2][i] == str[3][i]) {
            if ((str[2][i] >= 'A' && str[2][i] <= 'Z') ||
                (str[2][i] >= 'a' && str[2][i] <= 'z')) {
                if (i < 10) {
                    cout << "0" << i;
                } else {
                    cout << i;
                }
                break;
            }
        }
    }
    return 0;
}