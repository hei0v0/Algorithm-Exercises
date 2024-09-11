#include <iostream>
#include <stack>
using namespace std;

struct node {
    int data, next;
} node[100050];

int main() {
    int start, n, k;
    cin >> start >> n >> k;
    for (int i = 0; i < n; i++) {
        int add;
        cin >> add;
        cin >> node[add].data >> node[add].next;
    }
    int qwq = start, tot = start, p = 0;
    stack<int> list;
    while (1) {
        if (p == 0) {
            list.push(tot);
            if (tot != start)
                node[qwq].next = -1;
        }
        p = (p + 1) % k;
        qwq = tot;
        tot = node[qwq].next;
        if (tot == -1)
            break;
    }
    tot = list.top();
    list.pop();
    while (1) {
        while (1) {
            printf("%05d %d ", tot, node[tot].data);
            tot = node[tot].next;
            if (tot == -1)
                break;
            else {
                printf("%05d\n", tot);
            }
        }
        if (list.empty()) {
            printf("-1");
            break;
        } else {
            tot = list.top();
            list.pop();
            printf("%05d\n", tot);
        }
    }
    return 0;
}