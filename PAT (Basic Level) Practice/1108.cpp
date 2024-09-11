#include <iostream>
#include <string>
using namespace std;

int main() {
    int a[10] = {0};
    string str;
    getline(cin, str);
    for (int i = 0; i < str.length(); i++) {
        switch (str[i]) {
        case 'S': {
            a[0]++;
            break;
        }
        case 't': {
            a[1]++;
            break;
        }
        case 'r': {
            a[2]++;
            break;
        }
        case 'i': {
            a[3]++;
            break;
        }
        case 'n': {
            a[4]++;
            break;
        }
        case 'g': {
            a[5]++;
            break;
        }
        }
    }
    while (1) {
        bool flag = true;
        if (a[0]) {
            cout << 'S';
            a[0]--;
            flag = false;
        }
        if (a[1]) {
            cout << 't';
            a[1]--;
            flag = false;
        }
        if (a[2]) {
            cout << 'r';
            a[2]--;
            flag = false;
        }
        if (a[3]) {
            cout << 'i';
            a[3]--;
            flag = false;
        }
        if (a[4]) {
            cout << 'n';
            a[4]--;
            flag = false;
        }
        if (a[5]) {
            cout << 'g';
            a[5]--;
            flag = false;
        }
        if (flag)
            break;
    }
    return 0;
}