#include <iostream>
#include <string>
using namespace std;

int n, m, num = 0, sum = 0;
int check[10050] = {0}, mn, x;
char name[10];
bool flag = true;

int main() {
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        cin >> x;
        check[x] = 1;
    }
    for (int i = 0; i < n; i++) {
        cin >> name >> mn;
        flag = true;
        for (int j = 0; j < mn; j++) {
            cin >> x;
            if (check[x] == 1) {
                if (flag)
                    printf("%s:",name);
                printf(" %04d", x);
                flag = false;
                sum++;
            }
        }
        if (!flag) {
            num++;
            printf("\n");
        }
    }
    printf("%d %d", num, sum);
    return 0;
}