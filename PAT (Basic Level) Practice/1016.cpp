#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b;
    char da, db;
    int pa = 0, pb = 0;
    cin >> a >> da >> b >> db;
    for (int i = 0; i < a.length(); i++) {
        if (a[i] == da) {
            pa = pa * 10 + da - '0';
        }
    }
    for (int i = 0; i < b.length(); i++) {
        if (b[i] == db) {
            pb = pb * 10 + db - '0';
        }
    }
    cout << (pa + pb);
    return 0;
}