#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    int sale[1050] = {0};
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            int x;
            scanf("%d", &x);
            sale[j] += x;
        }
    }
    vector<int> champ;
    int tot = 0;
    for (int i = 0; i < n; i++) {
        if (sale[i] > tot) {
            champ.clear();
            champ.push_back(i + 1);
            tot = sale[i];
        } else if (sale[i] == tot) {
            champ.push_back(i + 1);
        }
    }
    printf("%d\n", tot);
    for (int i = 0; i < champ.size(); i++) {
        if (i)
            printf(" ");
        printf("%d", champ[i]);
    }
    return 0;
}