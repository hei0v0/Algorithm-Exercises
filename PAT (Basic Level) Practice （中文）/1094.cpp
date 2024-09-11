#include <cmath>
#include <iostream>
#include <string>
using namespace std;

bool isprime(int x) {
    if (x == 0 || x == 1)
        return false;
    if (x == 2 || x == 3)
        return true;
    if (x % 2 == 0)
        return false;
    for (int i = 3; i <= sqrt(x); i++) {
        if (x % i == 0)
            return false;
    }
    return true;
}

int main() {
    int l, k;
    string n;
    cin >> l >> k >> n;
    bool flag = false;
    for (int i = 0; i <= l - k; i++) {
        string str = n.substr(i, k);
        int x = stoi(str);
        if (isprime(x)) {
            flag = true;
            cout << str;
            break;
        }
    }
    if (!flag)
        cout << "404";
    return 0;
}