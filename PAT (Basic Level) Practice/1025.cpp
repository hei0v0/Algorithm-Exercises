#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    int first, n, k, temp;
    cin >> first >> n >> k;
    int data[100005], next[100005], list[100005];
    for (int i = 0; i < n; i++) {
        cin >> temp;
        cin >> data[temp] >> next[temp];
    }
    int j = 0;
    while (first != -1) {
        list[j++] = first;
        first = next[first];
    }
    for (int i = 0; i < (j - j % k); i += k) {
        reverse(begin(list) + i, begin(list) + i + k);
    }
    for (int i = 0; i < j - 1; i++) {
        printf("%05d %d %05d\n", list[i], data[list[i]], list[i + 1]);
    }
    printf("%05d %d -1\n", list[j - 1], data[list[j - 1]]);
    return 0;
}