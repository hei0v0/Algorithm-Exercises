#include <cmath>
#include <iostream>
#include <string>
using namespace std;

bool isprime(int x) {
    if (x == 2 || x == 3)
        return true;
    if (x % 2 == 0)
        return false;
    for (int i = 3; i <= sqrt(x); i += 2) {
        if (x % i == 0)
            return false;
    }
    return true;
}

int main() {
    int n;
    int checked[10050] = {0};
    cin >> n;

    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        checked[x] = i;
    }

    int m;
    cin >> m;
    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;
        printf("%04d", x);
        switch (checked[x]) {
        case -1:
            printf(": Checked\n");
            break;
        case 0:
            printf(": Are you kidding?\n");
            break;
        default:
            if (checked[x] == 1)
                printf(": Mystery Award\n");
            else if (checked[x] > 1 && isprime(checked[x]))
                printf(": Minion\n");
            else if (checked[x] > 1)
                printf(": Chocolate\n");
            checked[x] = -1;
        }
    }
    return 0;
}