#include <cstdio>
#include <iostream>
using namespace std;

int n, m;
bool wrong = false;
struct node1 {
    int score, num, answer, t[10] = {0}, choose[10] = {0};
} q[105];

struct node2 {
    int ques;
    char check;
} ans[605];

int main() {
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
        double sscore = 0.0;
        char nan;
        for (int j = 0; j < m; j++) {
            int num;
            cin >> nan >> num;
            bool flag = true;
            for (int k = 0; k < num; k++) {
                char c;
                cin >> c;
                int x = c - 'a';
                q[j].choose[x]++;
                if (q[j].t[x] == 0) {
                    flag = false;
                    wrong = true;
                }
            }
            if (flag && num == q[j].answer)
                sscore += q[j].score;
            else if (flag)
                sscore += q[j].score * 1.0 / 2.0;
            cin >> nan;
        }
        printf("%.1lf\n", sscore);
    }

    if (wrong) {
        int maxc = 0, maxnum = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < q[i].num; j++) {
                if (q[i].t[j] == 1)
                    q[i].choose[j] = n - q[i].choose[j];
                if (q[i].choose[j] > maxc) {
                    maxnum = 1;
                    ans[0].ques = i;
                    ans[0].check = (char)(j + 'a');
                    maxc = q[i].choose[j];
                } else if (q[i].choose[j] == maxc && maxc > 0) {
                    ans[maxnum].ques = i;
                    ans[maxnum++].check = (char)(j + 'a');
                }
            }
        }
        for (int i = 0; i < maxnum; i++) {
            printf("%d %d-%c\n", maxc, ans[i].ques + 1, ans[i].check);
        }
    } else
        printf("Too simple\n");
    return 0;
}