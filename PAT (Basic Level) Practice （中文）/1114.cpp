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
    for (int i = 3; i * i <= x; i++) {
        if (x % i == 0)
            return false;
    }
    return true;
}

int main() {
    string str;
    cin >> str;
    int len = str.length();
    bool flag = true;
    for (int i = 0; i < len; i++) {
        cout << str.substr(i, len - i) << " ";
        if (isprime(stoi(str.substr(i, len - i))))
            printf("Yes\n");
        else {
            printf("No\n");
            flag = false;
        }
    }
    if (flag)
        printf("All Prime!");
    return 0;
}