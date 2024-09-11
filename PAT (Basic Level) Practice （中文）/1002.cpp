#include <iostream>
#include <string>
using namespace std;

string num[] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};
int ans = 0;
string n, tot = "";

int main() {
    cin >> n;
    for (int i = 0; i < n.length(); i++) {
        ans += n[i] - '0';
    }
    tot = num[ans % 10];
    ans /= 10;
    while (ans != 0) {
        tot = num[ans % 10] + " " + tot;
        ans /= 10;
    }
    cout << tot;
    return 0;
}