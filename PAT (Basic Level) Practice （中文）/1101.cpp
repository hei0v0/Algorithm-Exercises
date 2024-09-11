#include <iostream>
using namespace std;

int main() {
    string a;
    int d;
    cin >> a >> d;
    string b = a.substr(a.length() - d, d) + a.substr(0, a.length() - d);
    int a1 = stoi(a), b1 = stoi(b);
    printf("%.2lf", b1 * 1.0 / a1);
    return 0;
}