#include <cstdio>
#include <iostream>
using namespace std;

struct node {
    int score, num, answer, t[10] = {0}, wrong = 0;
} q[150];

int main() {
    int n, m, sscore = 0;
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        cin >> q[i].score >> q[i].num >> q[i].answer;
        for (int j = 0; j < q[i].answer; j++) {
            char c;
            cin >> c;
            int x = c - 'a';
            q[i].t[x] = 1;
        }
    }

    for (int i = 0; i < n; i++) {
        sscore = 0;
        char nan;
        for (int j = 0; j < m; j++) {
            int num, t[10] = {0};
            cin >> nan >> num;
            for (int k = 0; k < num; k++) {
                char c;
                cin >> c;
                int x = c - 'a';
                t[x] = 1;
            }
            bool flag = true;
            for (int i = 0; i < q[j].num; i++) {
                if (t[i] != q[j].t[i])
                    flag = false;
            }
            if (flag)
                sscore += q[j].score;
            else
                q[j].wrong++;
            cin >> nan;
        }
        printf("%d\n", sscore);
    }
    int p = 0, list[150] = {0}, max = 0;
    for (int i = 0; i < m; i++) {
        if (q[i].wrong > max) {
            max = q[i].wrong;
            list[0] = i;
            p = 1;
        } else if (q[i].wrong == max && max != 0) {
            list[p++] = i;
        }
    }
    if (max > 0) {
        printf("%d", max);
        for (int i = 0; i < p; i++) {
            printf(" %d", list[i] + 1);
        }
    } else
        printf("Too simple");
    return 0;
}