#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
using namespace std;

struct node {
    string name;
    int num = 0;
    double score = 0.0;
} list[100050];

bool cmp(struct node a, struct node b) {
    if ((int)floor(a.score) != (int)floor(b.score))
        return (int)floor(a.score) > (int)floor(b.score);
    else if (a.num != b.num)
        return a.num < b.num;
    else
        return a.name < b.name;
}

int main() {
    int n, idx = 1;
    map<string, int> sc;
    cin >> n;
    while (n--) {
        int point;
        string scn, code;
        cin >> code >> point >> scn;
        for (int i = 0; i < scn.length(); i++) {
            if (scn[i] >= 'A' && scn[i] <= 'Z') {
                scn[i] = scn[i] - 'A' + 'a';
            }
        }
        if (!sc.count(scn)) {
            sc[scn] = idx;
            list[idx].name = scn;
            idx++;
        }
        list[sc[scn]].num++;
        switch (code[0]) {
        case 'T':
            list[sc[scn]].score += point * 1.5;
            break;
        case 'A':
            list[sc[scn]].score += point * 1.0;
            break;
        case 'B':
            list[sc[scn]].score += point * 1.0 / 1.5;
            break;
        }
    }
    sort(list + 1, list + idx, cmp);
    cout << idx - 1 << "\n";
    int rank = 1, score = (int)floor(list[1].score);
    for (int i = 1; i < idx; i++) {
        if (score != (int)floor(list[i].score)) {
            score = (int)floor(list[i].score);
            rank = i;
        }
        cout << rank << " " << list[i].name << " " << score << " " << list[i].num << "\n";
    }
    return 0;
}