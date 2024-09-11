#include <iostream>
using namespace std;

struct node {
    int data, next, pre = -1;
} node[100050];

int main() {
    int l1, l2, n;
    cin >> l1 >> l2 >> n;
    while (n--) {
        int add, data, next;
        cin >> add >> data >> next;
        node[add].data = data;
        node[add].next = next;
    }
    int len1 = 0, len2 = 0, pre1 = l1, pre2 = l2;
    int r1 = 0, r2 = 0;
    while (node[pre1].next != -1) {
        len1++;
        // printf("%d %d %d\n", pre1, node[pre1].data, node[pre1].next);
        node[node[pre1].next].pre = pre1;
        pre1 = node[pre1].next;
        if (node[pre1].next == -1)
            r1 = pre1;
    }
    while (node[pre2].next != -1) {
        len2++;
        // printf("%d %d %d\n", pre2, node[pre2].data, node[pre2].next);
        node[node[pre2].next].pre = pre2;
        pre2 = node[pre2].next;
        if (node[pre2].next == -1)
            r2 = pre2;
    }
    if (len2 >= len1 * 2) {
        swap(l1, l2);
        swap(r1, r2);
        swap(len1, len2);
    }
    pre1 = l1;
    pre2 = r2;
    while (pre1 != -1) {
        // 第一个
        printf("%05d %d ", pre1, node[pre1].data);
        pre1 = node[pre1].next;
        // 第二个
        if (pre1 == -1) {
            printf("-1");
            break;
        } else {
            printf("%05d\n%05d %d ", pre1, pre1, node[pre1].data);
            pre1 = node[pre1].next;
        }
        // 第三个
        if (pre2 != -1) {
            printf("%05d\n%05d %d ", pre2, pre2, node[pre2].data);
            pre2 = node[pre2].pre;
        } else if (pre1 == -1) {
            printf("-1");
            break;
        } else {
            printf("%05d\n%05d %d ", pre1, pre1, node[pre1].data);
            pre1 = node[pre1].next;
        }
        if (pre1 == -1) {
            printf("-1");
            break;
        } else {
            printf("%05d\n", pre1);
        }
    }
    return 0;
}