#include <iostream>
using namespace std;

bool isprime(int x) {
    if (x == 0 || x == 1)
        return false;
    if (x == 2 || x == 3)
        return false;
    if (x % 2 == 0)
        return false;
    for (int i = 3; i * i <= x; i++) {
        if (x % i == 0)
            return false;
    }
    return true;
}

int main() {
    int n;
    scanf("%d", &n);
    if (n > 7 && isprime(n) && isprime(n - 6))
        printf("Yes\n%d", n - 6);
    else if (isprime(n) && isprime(n + 6))
        printf("Yes\n%d", n + 6);
    else {
        printf("No\n");
        while (1) {
            n++;
            if (isprime(n)) {
                if ((n > 7 && isprime(n - 6)) || isprime(n + 6)) {
                    printf("%d", n);
                    break;
                }
            }
        }
    }
    return 0;
}