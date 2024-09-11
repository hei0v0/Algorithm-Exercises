#include <iostream>
#include <string>
using namespace std;

int main() {
    string a[80];
    int i = 0;
    while (cin >> a[i]) {
        i++;
    }
    for (int j = i - 1; j >= 0; j--) {
        if (j != i - 1)
            cout << " ";
        cout << a[j];
    }
    return 0;
}