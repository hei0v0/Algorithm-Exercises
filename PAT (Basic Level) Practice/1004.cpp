#include <iostream>
#include <string>
using namespace std;

int n;
int maxs = 0, mins = 100;
string maxname, minname, maxcode, mincode;
int score;
string name, code;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> name >> code >> score;
        if (score > maxs) {
            maxs = score;
            maxname = name;
            maxcode = code;
        }
        if (score < mins) {
            mins = score;
            minname = name;
            mincode = code;
        }
    }
    cout << maxname << " " << maxcode << "\n";
    cout << minname << " " << mincode << "\n";
    return 0;
}