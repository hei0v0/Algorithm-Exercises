#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string w[30][10];
    for (int i = 0; i < 26; i++) {
        for (int j = 0; j < 7; j++) {
            cin >> w[i][j];
        }
    }
    getchar();
    string str;
    getline(cin, str);
    int l = 0;
    bool flag = false;
    vector<string> words;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] >= 'A' && str[i] <= 'Z' && !flag) {
            l = i;
            flag = true;
        } else if ((str[i] < 'A' || str[i] > 'Z') && flag) {
            flag = false;
            words.push_back(str.substr(l, i - l));
        }
    }
    if (flag) {
        words.push_back(str.substr(l, str.length() - l));
    }
    for (int i = 0; i < words.size(); i++) {
        // cout << words[i] << "\n";
        if (i)
            cout << "\n";
        for (int k = 0; k < 7; k++) {
            for (int j = 0; j < words[i].length(); j++) {
                if (j)
                    cout << " ";
                cout << w[words[i][j] - 'A'][k];
            }
            cout << "\n";
        }
    }
    return 0;
}