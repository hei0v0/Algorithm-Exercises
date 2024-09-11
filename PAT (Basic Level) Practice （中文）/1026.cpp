#include <cmath>
#include <iostream>
using namespace std;

int main() {
    int c1, c2;
    cin >> c1 >> c2;
    int min = round((c2 - c1) * 1.0 / 100.0);
    printf("%02d:%02d:%02d", min / 60 / 60, min / 60 % 60, min % 60);
    return 0;
}