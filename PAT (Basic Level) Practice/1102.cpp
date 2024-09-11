#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

struct node {
    string id;
    int price, sale;
} s[10050];

bool cmp1(struct node a, struct node b) {
    return a.sale > b.sale;
}

bool cmp2(struct node a, struct node b) {
    return a.sale * a.price > b.sale * b.price;
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> s[i].id >> s[i].price >> s[i].sale;
    }
    sort(s, s + n, cmp1);
    printf("%s %d\n", s[0].id.c_str(), s[0].sale);
    sort(s, s + n, cmp2);
    printf("%s %d\n", s[0].id.c_str(), s[0].price * s[0].sale);
    return 0;
}