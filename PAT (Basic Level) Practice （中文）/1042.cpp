#include <iostream>
#include <string>
using namespace std;

int book[30] = {0};

int main() {
    string s;
    getline(cin, s);
    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= 'a' && s[i] <= 'z')
            book[s[i] - 'a']++;
        else if (s[i] >= 'A' && s[i] <= 'Z')
            book[s[i] - 'A']++;
    }
    int max = 0;
    for (int i = 0; i < 26; i++) {
        if (book[i] > book[max])
            max = i;
    }
    cout << (char)('a' + max) << " " << book[max];
    return 0;
}