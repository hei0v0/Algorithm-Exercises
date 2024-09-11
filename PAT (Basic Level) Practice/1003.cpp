#include <iostream>
#include <string>
using namespace std;

int n, flag, p, pa, ta, aa;
string str;

int main() {
    cin >> n;
    while (n--) {
        flag = 0;
        pa = 0;
        ta = 0;
        aa = 0;
        cin >> str;
        for (int i = 0; i < str.length(); i++) {
            switch (flag) {
            case 0:
                if (str[i] == 'P') {
                    flag = 1;
                    p = i;
                } else if (str[i] == 'A') {
                    pa++;
                } else
                    flag = -1;
                break;
            case 1:
                if (str[i] != 'A') {
                    if (str[i] == 'T' && p != i - 1) {
                        flag = 2;
                        aa = i - p - 1;
                    } else
                        flag = -1;
                }
                break;
            case 2:
                if (str[i] == 'A') {
                    ta++;
                }
            }
        }
        if (flag == 2 && ((aa == 1 && pa == ta) || (ta == aa * pa)))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}