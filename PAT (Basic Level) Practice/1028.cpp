#include <iostream>
#include <string>
using namespace std;

struct people {
    int y, d, m;
    string name;

    bool operator<(const people &a) {
        if (y != a.y)
            return this->y < a.y;
        else if (m != a.m)
            return this->m < a.m;
        else
            return this->d < a.d;
    }
} p[100005];

bool check(int x) {
    if (p[x].y > 2014 || p[x].y < 2014 - 200)
        return false;
    else if ((p[x].y == 2014 && p[x].m > 9) ||
             (p[x].y == 2014 - 200 && p[x].m < 9))
        return false;
    else if ((p[x].y == 2014 && p[x].m == 9 && p[x].d > 6) ||
             (p[x].y == 2014 - 200 && p[x].m == 9 && p[x].d < 6))
        return false;
    return true;
}

int main() {
    int n, m = 0;
    cin >> n;
    int max = 0, min = 0;
    for (int i = 0; i < n; i++) {
        char c;
        cin >> p[i].name >> p[i].y >> c >> p[i].m >> c >> p[i].d;

        if (check(i)) {
            m++;
            if (m == 1) {
                max = i;
                min = i;
            } else {
                if (p[i] < p[max])
                    max = i;
                if (p[min] < p[i])
                    min = i;
            }
        }
    }
    if (m == 0)
        cout << 0;
    else
        cout << m << " " << p[max].name << " " << p[min].name;
    return 0;
}