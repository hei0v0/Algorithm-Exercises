#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    getchar();
    while (n--) {
        string time;
        getline(cin, time);

        string t = "0000", mon = time.substr(0, 3);
        bool flag = true;
        int len = time.length();
        for (int i = 3, j = 1; i >= 0; i--, j++) {
            if (time[len - j] >= '0' && time[len - j] <= '9' && flag)
                t[i] = time[len - j];
            else {
                t[i] = '0';
                flag = false;
            }
        }

        if (mon.compare("Jan") == 0) {
            t += "01";
        } else if (mon.compare("Feb") == 0) {
            t += "02";
        } else if (mon.compare("Mar") == 0) {
            t += "03";
        } else if (mon.compare("Apr") == 0) {
            t += "04";
        } else if (mon.compare("May") == 0) {
            t += "05";
        } else if (mon.compare("Jun") == 0) {
            t += "06";
        } else if (mon.compare("Jul") == 0) {
            t += "07";
        } else if (mon.compare("Aug") == 0) {
            t += "08";
        } else if (mon.compare("Sep") == 0) {
            t += "09";
        } else if (mon.compare("Oct") == 0) {
            t += "10";
        } else if (mon.compare("Nov") == 0) {
            t += "11";
        } else if (mon.compare("Dec") == 0) {
            t += "12";
        }
        if (time[5] >= '0' && time[5] <= '9')
            t += time.substr(4, 2);
        else
            t = t + "0" + time[4];
        flag = true;
        for (int i = 0; i < 4; i++) {
            if (t[i] != t[7 - i])
                flag = false;
        }
        if (flag)
            cout << "Y " << t << "\n";
        else
            cout << "N " << t << "\n";
    }
    return 0;
}